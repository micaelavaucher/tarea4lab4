#ifndef _DTHOSTAL_H
#define _DTHOSTAL_H

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
/*
#include "calificacion.h"
#include "dtcalificacion.h"
*/




class DTHostal{
    private:
    string nombre;
    string direccion;
    int telefono;

    DTEmpleado **empleadosHotel[100]; 
    int topeEmpleados;
    DTHabitacion **habitacionesHotel[100];
    int topeHabitacion; 
    DTReserva **reservasHotel[100];
    int topeReserva; 
    //DTCalificacion **calificacionesHotel[100];
    int topeCalificacion;

    public:
    //DTHostal(string, string, int, DTEmpleado**, DTHabitacion**, DTReserva**, DTCalificacion**);

    string getNombre();
    string getDireccion();
    int getTelefono();

    DTEmpleado** getEmpleados(int&);
    DTHabitacion** getHabitaciones(int&);
    DTReserva** getReservas(DTFecha, int&);
    //DTCalificacion** getCalificaciones(int&);


    int getTopeEmpleados();
    int getTopeHabitacion();
    int getTopeReserva();
    int getTopeCalificacion();

    ~DTHostal();
};



#endif