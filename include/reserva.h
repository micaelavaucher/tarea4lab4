#ifndef _RESERVA_H
#define _RESERVA_H
#include "estadoreserva.h"
#include "dtfecha.h"
#include "huesped.h"
#include "habitacion.h"

class Reserva{
    protected:
        int codigo;
        DTFecha checkIn;
        DTFecha checkOut;
        DTFecha fecha;
        Habitacion * hab;
        EstadoReserva estado;
        Huesped * huesped;
    public:
        Reserva(int, DTFecha, DTFecha, DTFecha, Habitacion, EstadoReserva, Huesped);
        virtual void setCodigo(int i = 0);
        void setCheckIn(DTFecha);
        void setCheckOut(DTFecha);
        void setFecha(DTFecha);
        void setEstado(EstadoReserva);
        void setHuesped(Huesped*);
        void setHabitacion(Habitacion*);
        int getCodigo();
        DTFecha getCheckOut();
        DTFecha getCheckIn();
        DTFecha getFecha();
        EstadoReserva getEstado();
        Huesped * getHuesped();
        Habitacion * getHabitacion();
        ~Reserva();      
};

#endif