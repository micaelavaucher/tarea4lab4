#include "../include/reserva.h"
#include "../include/reservagrupal.h"

ReservaGrupal::ReservaGrupal(Huesped ** huespedr_, int tope_, int codigo_, DTFecha checkIn_, DTFecha checkOut_, DTFecha fecha_, EstadoReserva estado_, Huesped *huesped_, Habitacion * habitacion_) :Reserva(codigo_, checkIn_, checkOut_, estado_, huesped_, habitacion_){
    tope = tope_;
    huespedes = huespedr_;
}

void ReservaGrupal::setCodigo(int i){
    codigo = i * 100; 
}

ReservaGrupal::~ReservaGrupal(){};  