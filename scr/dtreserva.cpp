#include "../include/dtreserva.h"
#include "../include/dtfecha.h"
#include "../include/estadoReserva.h"

DTReserva::DTReserva(int codigo_,DTFecha checkIn_, DTFecha checkOut_, DTFecha fecha_,EstadoReserva estado_, int habitacion_){
        codigo = codigo_;
        checkIn = checkIn_;
        checkOut = checkOut_;
        fecha = fecha_;
        estado = estado_;
        habitacion = habitacion_;
};

int DTReserva::getCodigo(){
        return codigo;
};

DTFecha DTReserva::getCheckIn(){
        return checkIn;        
};

DTFecha DTReserva::getCheckOut(){
        return checkOut;
};


DTFecha DTReserva::getFecha(){
        return fecha;
};

EstadoReserva DTReserva::getEstado(){
        return estado;
};


int DTReserva::getHabitacion(){
        return habitacion;
};

