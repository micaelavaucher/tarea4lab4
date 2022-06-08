#include "../include/dtreservagrupal.h"
#include "../include/dtreserva.h"
#include "../include/dthuesped.h"
#include "../include/estadoReserva.h"
#include "../include/dtfecha.h"

DTReservaGrupal::DTReservaGrupal(DTHuesped ** huespedes_, int tope_ ,int codigo_,DTFecha checkin_,DTFecha checkout_,DTFecha fecha_,EstadoReserva estado_,float costo_,int habitacion_) :DTReserva(codigo_,checkin_,checkout_, fecha_, estado_,habitacion_){
    huespedes = huespedes_;
    tope = tope_;
  
};
int DTReservaGrupal::getTope(){
    return tope;
};

DTHuesped ** DTReservaGrupal::getHuespedes(){
    return huespedes;
};

DTReservaGrupal::~DTReservaGrupal(){
    
};