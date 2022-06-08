#ifndef _DTESTADIA_H
#define _DTESTADIA_H

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
/*
#include "calificacion.h"
#include "dtcalificacion.h"
*/

class DTEstadia{

private:
    DTFecha checkIn;
    DTFecha checkOut;
    int promo;
    DTReserva reserva;
    DTHuesped huesped;
    //DTCalificacion calificacion;

public:

    DTEstadia(DTFecha, DTFecha, int,  DTReserva, DTHuesped);
    //DTEstadia(DTFecha, DTFecha, int,  DTReserva, DTHuesped, DTCalificacion);

    DTFecha getCheckIn();
    DTFecha getCheckOut();
    int getPromo();
    DTReserva getReserva();
    DTHuesped getHuesped();
    //DTCalificacion getCalificacion();

    ~DTEstadia();
};

#endif