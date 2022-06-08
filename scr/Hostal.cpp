#include "reserva.h"
#include "dtfecha.h"
#include "dthabitacion.h"
#include "dthuesped.h"
#include "estadoreserva.h"
#include "huesped.h"
#include "dtreserva.h"
#include "dtreservagrupal.h"
#include "dtreservaindividual.h"
#include "habitacion.h"
#include "dtempleado.h"
#include "empleado.h"
#include "dtcalificacion.h"
#include "cargoEmpleado.h"
#include "Hostal.h"

#include "reserva.cpp
#include "dtfecha.cpp"
#include "dthabitacion.cpp"
#include "dthuesped.cpp"
#include "estadoreserva.cpp"
#include "huesped.cpp"
#include "dtreserva.cpp"
#include "dtreservagrupal.cpp"
#include "dtreservaindividual.cpp"
#include "habitacion.cpp"
#include "dtempleado.cpp"
#include "empleado.cpp"
#include "dtcalificacion.cpp"
#include "cargoEmpleado.cpp"

#include <cstring>
#include <string>
#include <iostream>
using namespace std;


Hostal::Hostal() {

    nombre="";
    direccion="";
    telefono=0;

    Empleado *empleadosHotel[100];
    Habitacion *habitacionesHotel[100];
    Reserva *reservasHotel[100];
    Calificacion *calificacionesHotel[100];

    topeEmpleados=0;
    topeHabitacion=0;
    topeReserva=0;
    topeCalificacion=0;
}

void Hostal::setNombre(string _nombre) {
    nombre=_nombre;
}

void Hostal::setDireccion(string _direccion) {
    direccion=_direccion;
}

void Hostal::setTelefono(int _telefono) {
    telefono=_telefono;
}

bool Hostal::estaHabitacion(int numero){
    bool esta= false;
    int i=0;

    while (i<topeHabitacion && !esta) {
        esta = (habitacionesHotel[i]->getNumero() == numero);
        i++;
    }

    return esta;
}

bool Hostal::estaEmpleado(string email) {

    bool esta= false;
    int i=0;

    while (i<topeEmpleados && !esta) {
        esta = (empleadosHotel[i]->getEmail() == email);
        i++;
    }

    return esta;
}

void Hostal::agregarEmpleado(string email,Cargo puesto) {

    try {

        if (!estaEmpleado(email) && topeEmpleados<100) {

            factory f;
            icontroladorEstadia ce= f.getControladorEstadia();

            Empleado *e= findEmpleado(email);
            DTEmpleado *dte= new DTEmpleado(e->nombre, e->email, e->password, puesto);

            empleadosHotel[topeEmpleados]=dte;
            topeEmpleados++;

        } else {
            throw(0);
        }

        
    } catch(...) {
        cout << "No se pudo ingresar al empleado en el hostal" << endl;
    }


}

DTEmpleado** Hostal::obtenerEmpleados(int &cantEmpleados){
    
    DTEmpleado **arrEmp= new DTEmpleado*[topeEmpleados];

    for (int i=0; i<topeEmpleados; i++) {
        arrEmp[i]=new DTEmpleado(empleadosHotel[i]->getNombre(), empleadosHotel[i]->getEmail(), empleadosHotel[i]->getPassword(), empleadosHotel[i]->getCargo());
    }

    cantEmpleados= topeEmpleados;

    return arrEmp;
}

void Hostal::agregarHabitacion(int _numero, float _precio, int _capacidad) {

    try {

        if (!estaHabitacion(_numero) and topeHabitacion<100) {

            Habitacion *h= new Habitacion(_numero, _precio, _capacidad);
            habitacionesHotel[topeHabitacion]=h;
            topeHabitacion++;
        } else {
            throw (0);
        }
    } catch(...) {

        cout << "La habitacion ya esta en el sistema" << endl;
    }
}

DTHabitacion ** Hostal::obtenerHabitaciones(int &cantHabitaciones) {

    DTHabitacion **arrHab= new DTHabitacion*[topeHabitacion];

    for (int i=0; i<topeHabitacion; i++) {
        arrHab[i]= new DTHabitacion(habitacionesHotel[i]->getNumero(), habitacionesHotel[i]->getPrecio(), habitacionesHotel[i]->getCapacidad());
    }

    cantHabitaciones=topeHabitacion;

    return arrHab;
}

bool Hostal::compararFechas(DTFecha checkIn, DTFecha checkOut) {

    bool res= ((checkIn.getDia()==checkOut.getDia()) && (checkIn.getMes()==checkOut.getMes()) && (checkIn.getAnio()==checkOut.getAnio()))
    return res;
}

DTReserva** Hostal::obtenerReservas(DTFecha fecha, int &cantidadReservas) {

    int tope=0;
    

    for (int i=0; i<topeReserva; i++) {
        
        if (compararFechas(fecha,  reservasHotel[i]->getCheckIn()) ) {
            tope++;
        }
    }

    int cont=0;

    DTReserva ** dtres= new DTReserva*[tope];

    for(int i=0; i<topeReserva; i++) {

        if (compararFechas(fecha, reservasHotel[i]->getCheckIn())) {

            if ( dynamic_cast<ReservaGrupal*>(reservasHotel[i]) ==  NULL ) {

                ReservaIndividual *ri= dynamic_cast<ReservaIndividual*>(reservasHotel[i]);

                DTReservaIndividual *dtri= new DTReservaIndividual(ri->getPagado(),  ri->getCodigo(), ri->getCheckIn(), ri->getCheckOut(), ri->getEstado(), ri->calcularCosto(), ri->getHuesped(), ri->getHabitacion()->getNumero());

                dtres[cont]=dtri;
                cont++;

            } else {

                ReservaGrupal *rg= dynamic_cast<ReservaGrupal*>(reservasHotel[i]);


                DTReservaGrupal *dtrg= new DTReservaGrupal(rg->getHuespedes(), rg->getTope(), rg->getCodigo(), rg->getCheckIn(), rg->getCheckOut(), rg->getEstado(), rg->calcularCosto(), rg->getHuesped(),rg->getHabitacion()->getNumero());

                dtres[cont]=dtrg;
                cont++;

            }
            
        }

    }

    cantidadReservas=tope;
    return dtres;

}

void Hostal::registrarReserva(string email, DTReserva* reserva) {
    

    if (dynamic_cast<DTReservaIndividual*>(reserva) == NULL) {

        DTReservaGrupal *dtrg= dynamic_cast<DTReservaGrupal*>(reserva);

        int habitacion=dtrg->getHabitacion();
        int i=0;

        while ( i < topeHabitacion and habitacionesHotel[i]->getNumero() != habitacion) {
            i++;
        } 

        DTHabitacion *hab= new DTHabitacion(habitacionesHotel[i]->getNumero(), habitacionesHotel[i]->getPrecio(), habitacionesHotel[i]->getCapacidad());

        ReservaGrupal *rg= new ReservaGrupal(dtrg->getHuespedes(), dtrg->getTope(), dtrg->getCodigo(), dtrg->getCheckIn(), dtrg->getCheckOut(), dtrg->getEstado(), dtrg->getHuesped(), hab);

        Reserva *r= dynamic_cast<Reserva*>(rg);

        reservasHotel[topeReserva]=r;

    } else {

        DTReservaIndividual *dtri=  dynamic_cast<DTReservaIndividual*>(reserva);

        int habitacion=dtri->getHabitacion();
        int i=0;

        while ( i < topeHabitacion and habitacionesHotel[i]->getNumero() != habitacion) {
            i++;
        }

        DTHabitacion *hab= new DTHabitacion(habitacionesHotel[i]->getNumero(), habitacionesHotel[i]->getPrecio(), habitacionesHotel[i]->getCapacidad());

        ReservaIndividual *ri= new ReservaIndividual(dtri->getPagado(), dtri->getCodigo(), dtri->getCheckIn(), dtri->getCheckOut(), dtri->getEstado(), dtri->getHuesped(),hab);

        Reserva *r=dynamic_cast<Reserva*>(ri);

        reservasHotel[topeReserva]=r;


    }

    topeReserva++;
}

void Hostal::agregarCalificacion(int valoracion, string mensaje, string respuesta) {

    Calificacion *calif=new Calificacion(valoracion, mensaje, "");

    calificacionesHotel[topeCalificacion]=calif;
    topeCalificacion++;
}

DTCalificacion** Hostal::obtenerCalificaciones(int& cantidadCalificaciones) {

    DTCalificacion **arrCal= new DTCalificacion*[topeCalificacion];

    for (int i=0; i<topeCalificacion; i++) {
        arrCal[i]=new DTCalificacion(calificacionesHotel[i]->getValoracion(), calificacionesHotel[i]->getMensaje(), calificacionesHotel[i]->getRespuesta());
    }

    cantidadCalificaciones= topeCalificacion;

    return arrCal;
}

string Hostal::getNombre() {
    return this->nombre;
}

string Hostal::getDireccion() {
    return this->direccion;
}

int Hostal::getTelefono() {
    return this->telefono;
}

Hostal::~Hostal(){    
}