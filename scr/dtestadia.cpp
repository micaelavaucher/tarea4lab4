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
//#include "../include/calificacion.h"
//#include "../include/dtcalificacion.h"
//#include "../include/dtestadia.h"

#include "reserva.cpp"
//#include "dtfecha.cpp"
#include "dthabitacion.cpp"
#include "dthuesped.cpp"
#include "huesped.cpp"
#include "dtreserva.cpp"
#include "dtreservagrupal.cpp"
#include "dtreservaindividual.cpp"
#include "habitacion.cpp"
//#include "calificacion.cpp"
//#include "dtcalificacion.cpp"

DTEstadia::DTEstadia(DTFecha in, DTFecha out, int pro, DTReserva res, DTHuesped hues){

    checkIn=in;
    checkOut=out;
    promo=pro;
    reserva=res;
    huesped=hues;
}

DTEstadia::DTEstadia(DTFecha in, DTFecha out, int pro, DTReserva res, DTHuesped hues, DTCalificacion calif){

    checkIn=in;
    checkOut=out;
    promo=pro;
    reserva=res;
    huesped=hues;
    calificacion=calif;

}

DTFecha DTEstadia::getCheckIn(){
    return checkIn;
}

DTFecha DTEstadia::getCheckOut(){
    return checkOut;
}

int DTEstadia::getPromo(){
    return promo;
}

DTReserva DTEstadia::getReserva(){
    return  reserva;
}

DTHuesped DTEstadia::getHuesped(){
    return huesped;
}

DTCalificacion DTEstadia::getCalificacion(){
    return calificacion;
}

DTEstadia::~DTEstadia(){
}