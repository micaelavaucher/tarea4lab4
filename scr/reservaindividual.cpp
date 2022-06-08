#include "../include/reserva.h"
#include "../include/reservaindividual.h"

ReservaIndividual::ReservaIndividual(int codigo_, DTFecha checkIn_, DTFecha checkOut_,DTFecha fecha, EstadoReserva estado_, Huesped * huesped_, Habitacion * habitacion_) :Reserva(codigo_, checkIn_, checkOut_, estado_, huesped_, habitacion_){
     
};

void ReservaIndividual::setCodigo(int i){
    codigo = i * 0,1; 
}


ReservaIndividual::~ReservaIndividual(){
};

