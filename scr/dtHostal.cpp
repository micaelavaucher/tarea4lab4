#include "../include/reserva.h"
#include "../include/dtfecha.h"
#include "../include/dthabitacion.h"
#include "../include/dthuesped.h"
#include "../include/estadoreserva.h"
#include "../include/huesped.h"
#include "../include/dtreserva.h"
#include "../include/dtreservagrupal.h"
#include "../include/dtreservaindividual.h"
#include "../include/habitacion.h"
#include "../include/dtempleado.h"
//#include "../include/dtcalificacion.h"
#include "../include/cargo.h"
#include "../include/dthostal.h"

#include "reserva.cpp"
#include "dtfecha.cpp"
#include "dthabitacion.cpp"
#include "dthuesped.cpp"
#include "huesped.cpp"
#include "dtreserva.cpp"
#include "dtreservagrupal.cpp"
#include "dtreservaindividual.cpp"
#include "habitacion.cpp"
#include "dtempleado.cpp"
//#include "dtcalificacion.cpp"

#include <cstring>
#include <string>
#include <iostream>
using namespace std;

DTHostal::DTHostal(string nombre,string direccion,int telefono, DTEmpleado** empleados, DTHabitacion** habitaciones, DTReserva** reservas, DTCalificacion** calificaciones){

    this->nombre=nombre;
    this->direccion=direccion;
    this->telefono=telefono;

    this->empleadosHotel=empleados;
    this->habitacionesHotel=habitaciones;
    this->reservasHotel=reservas;
    this->calificacionesHotel=calificaciones;

    this->topeEmpleados=0;
    this->topeHabitacion=0;
    this->topeReserva=0;
    this->topeCalificacion=0;
}

string DTHostal::getNombre(){
    return nombre;
}

string DTHostal::getDireccion(){
    return direccion;
}

int DTHostal::getTelefono(){
    return telefono;
}

DTEmpleado** DTHostal::getEmpleados(int &cantEmpleados){

    DTEmpleado **arrEmp= new DTEmpleado*[topeEmpleados];

    for (int i=0; i<topeEmpleados; i++) {
        arrEmp[i]=new DTEmpleado(empleadosHotel[i]->getNombre(), empleadosHotel[i]->getEmail(), empleadosHotel[i]->getPassword(), empleadosHotel[i]->getCargo());
    }

    cantEmpleados= topeEmpleados;

    return arrEmp;
}

DTHabitacion ** DTHostal::getHabitaciones(int &cantHabitaciones) {

    DTHabitacion **arrHab= new DTHabitacion*[topeHabitacion];

    for (int i=0; i<topeHabitacion; i++) {
        arrHab[i]= new DTHabitacion(habitacionesHotel[i]->getNumero(), habitacionesHotel[i]->getPrecio(), habitacionesHotel[i]->getCapacidad());
    }

    cantHabitaciones=topeHabitacion;

    return arrHab;
}

DTReserva** DTHostal::getReservas(DTFecha fecha, int &cantidadReservas) {

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

            if ( dynamic_cast<DTReservaGrupal*>(reservasHotel[i]) ==  NULL ) {

                DTReservaIndividual *ri= dynamic_cast<DTReservaIndividual*>(reservasHotel[i]);

                DTReservaIndividual *dtri= new DTReservaIndividual(ri->getPagado(),  ri->getCodigo(), ri->getCheckIn(), ri->getCheckOut(), ri->getEstado(), ri->calcularCosto(), ri->getHuesped(), ri->getHabitacion()->getNumero());

                dtres[cont]=dtri;
                cont++;

            } else {

                DTReservaGrupal *rg= dynamic_cast<DTReservaGrupal*>(reservasHotel[i]);


                DTReservaGrupal *dtrg= new DTReservaGrupal(rg->getHuespedes(), rg->getTope(), rg->getCodigo(), rg->getCheckIn(), rg->getCheckOut(), rg->getEstado(), rg->calcularCosto(), rg->getHuesped(),rg->getHabitacion()->getNumero());

                dtres[cont]=dtrg;
                cont++;

            }
            
        }

    }

    cantidadReservas=tope;
    return dtres;

}

DTCalificacion** DTHostal::obtenerCalificaciones(int& cantidadCalificaciones) {

    DTCalificacion **arrCal= new DTCalificacion*[topeCalificacion];

    for (int i=0; i<topeCalificacion; i++) {
        arrCal[i]=new DTCalificacion(calificacionesHotel[i]->getValoracion(), calificacionesHotel[i]->getMensaje(), calificacionesHotel[i]->getRespuesta());
    }

    cantidadCalificaciones= topeCalificacion;

    return arrCal;
}

int DTHostal::getTopeEmpleados(){
    return topeEmpleados;
}

int DTHostal::getTopeHabitacion(){
    return topeHabitacion;
}

int DTHostal::getTopeReserva(){
    return topeReserva;
}

int DTHostal::getTopeCalificacion(){
    return topeCalificacion;
}

DTHostal::~DTHostal(){    
}
