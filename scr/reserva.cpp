#include "../include/reserva.h"
Reserva::Reserva(int codigo_, DTFecha checkIn_, DTFecha checkOut_, DTFecha fecha_, EstadoReserva estado_, Huesped *huesped_, Habitacion * habitacion_){
     codigo = codigo_;
     checkIn = checkIn_;
     checkOut = checkOut_;
     fecha = fecha_
     estado = estado_;
     huesped1 = huesped_;
     habitacion = habitacion_;
 };
void Reserva::setCheckIn(DTFecha checkIn_){
    checkIn = checkIn_;
};
void Reserva::setCheckOut(DTFecha checkOut_){
    checkOut = checkOut_;
};
void Reserva::setEstado(EstadoReserva estado_){
    estado = estado_;
};
void Reserva::setHuesped(Huesped * huesped_){
    huesped1 = huesped_;
};
void Reserva::setHabitacion(Habitacion * hab){
    habitacion = hab;
};
int Reserva::getCodigo(){
    return codigo;
};
DTFecha Reserva::getCheckIn(){
    return checkIn;
};
DTFecha Reserva::getCheckOut(){
    return checkOut;
};
EstadoReserva Reserva::getEstado(){
    return estado;
};
Huesped * Reserva::getHuesped(){
    return  huesped1;
};
Habitacion * Reserva::getHabitacion(){
    return  habitacion;
};
Reserva::~Reserva(){};