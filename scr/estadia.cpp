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
#include "../include/dtempleado.h"
#include "../include/cargo.h"
#include "../include/estadia.h"
/*
#include "calificacion.h"
#include "dtcalificacion.h"
*/
#include "../include/dtestadia.h"


#include "reserva.cpp"
#include "dtfecha.cpp"
#include "dthabitacion.cpp"
#include "dthuesped.cpp"
#include "huesped.cpp"
#include "dtreserva.cpp"
#include "dtreservagrupal.cpp"
#include "dtreservaindividual.cpp"
#include "habitacion.cpp"
#include "dtempleado.cpp"
/*
#include "calificacion..cpp"
#include "dtcalificacion.cpp"
*/

#include <cstring>
#include <string>
#include <iostream>
using namespace std;

Estadia::Estadia(){

    DTFecha in=DTFecha(1,1,2022);
    DTFecha out=DTFecha(2,1,2022);
    checkIn=in;
    checkOut=out;

    promo=0;

    reserva=NULL;
    huesped=NULL;
    calificacion=NULL;
}

Estadia::Estadia(DTFecha _checkIn, DTFecha _checkOut, int _promo, Reserva *res, Huesped *hues){

checkIn=_checkIn;
checkOut=_checkOut;
promo=_promo;
reserva=res;
huesped=hues;
calificacion=NULL;
}

void Estadia::setCheckIn(DTFecha in){
    checkIn=in;
}

void Estadia::setCheckOut(DTFecha out){
    checkOut=out;
}

void Estadia::setPromo(int pro){
    promo=pro;
}

void Estadia::setReserva(Reserva *res){
    reserva=res;
}

void Estadia::setHuesped(Huesped *hues){
    huesped=hues;
}

void Estadia::getCalificacion(Calificacion *calif){
    calificacion=calif;
}

DTFecha Estadia::getCheckIn(){
    return checkIn;
}

DTFecha Estadia::getCheckOut(){
    return checkOut;
}

int Estadia::getPromo(){
    return promo;
}

DTReserva Estadia::getReserva(){
    DTReserva res= reserva->getData();
    return res;
}

DTHuesped Estadia::getHuesped(){
    DTHuesped hues= huesped->getData();
    return hues;
}

DTCalifiacion Estadia::getCalificacion(){
    DTCalificacion calif= calificacion->getData();
    return calif
}

void Estadia::destruirCalificacion(){
    calificacion->~Calificacion();
    delete(calificacion);
}

DTEstadia Estadia::getData(){

    DTReserva res= reserva->getData()
    DTHuesped hues= huesped->getData();
    DTCalificacion calif= calificacion->getData();

    DTEstadia est=(checkIn, checkOut, promo, res, hues, calif);
    
    return est;
}

Estadia::~Estadia(){     
}