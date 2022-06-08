#ifndef _HOSTAL_H
#define _HOSTAL_H


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
/*
#include "calificacion.h"
#include "dtcalificacion.h"
*/
#include "cargo.h"


class Hostal{
    private:
    string nombre;
    string direccion;
    int telefono;

    Empleado *empleadosHotel[100]; 
    int topeEmpleados;
    Habitacion *habitacionesHotel[100];
    int topeHabitacion; 
    Reserva *reservasHotel[100];
    int topeReserva; 
    Calificacion *calificacionesHotel[100];
    int topeCalificacion;

    public:
    Hostal();

    void setNombre(string);
    void setDireccion(string);
    void setTelefono(int);

    bool estaEmpleado(string);
    bool estaHabitacion(int);

    void agregarEmpleado(string, Cargo);
    DTEmpleado** obtenerEmpleados(int&);

    void agregarHabitacion(int, float, int);
    DTHabitacion** obtenerHabitaciones(int&);
    
    bool compararFechas(DTFecha, DTFecha);

    DTReserva** obtenerReservas(DTFecha, int&);
    void registrarReserva(string, DTReserva*);

    void agregarCalificacion(int, string, string);
    DTCalificacion** obtenerCalificaciones(int&);
    
    string getNombre();
    string getDireccion();
    int getTelefono();

    int getTopeEmpleados();
    int getTopeHabitacion();
    int getTopeReserva();
    int getTopeCalificacion();

    ~Hostal();
};


#endif