#ifndef _ESTADIA_H
#define _ESTADIA_H

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
#include "dtestadia.h"
/*
#include "calificacion.h"
#include "dtcalificacion.h"
*/

class Estadia {

private:
    DTFecha checkIn;
    DTFecha checkOut;
    int promo;
    Reserva *reserva;
    Huesped *huesped;
    //Calficacion *calificacion;

public:

    Estadia();
    Estadia(DTFecha, DTFecha, int, Reserva*, Huesped*);

    void setCheckIn(DTFecha);
    void setCheckOut(DTFecha);
    void setPromo(int);
    void setReserva(Reserva*);
    void setHuesped(Huesped*);
    //void setCalificacion(Calificacion*)

    DTFecha getCheckIn();
    DTFecha getCheckOut();
    int getPromo();
    DTReserva getReserva();
    DTHuesped getHuesped();
    //DTCalificacion getCalificacion();

    void destruirCalificacion();

    DTEstadia getData();

    ~Estadia();
};

#endif