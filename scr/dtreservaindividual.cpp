#include "../include/dtreservaindividual.h"
#include "../include/dtreserva.h"
#include "../include/dthuesped.h"
#include "../include/estadoReserva.h"
#include "../include/dtfecha.h"

DTReservaIndividual::DTReservaIndividual(int codigo_,DTFecha checkin_,DTFecha checkout_,DTFecha fecha,EstadoReserva estado_,int habitacion_): DTReserva(codigo_,checkin_,checkout_, fecha_,estado_, habitacion_){

};

DTReservaIndividual::~DTReservaIndividual(){

};