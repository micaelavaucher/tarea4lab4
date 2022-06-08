#ifndef _RESERVAINDIVIDUAL_H
#define _RESERVAINDIVIDUAL_H
#include "reserva.h"
class ReservaIndividual : public Reserva{
    public: 
        ReservaIndividual(bool, int, DTFecha, DTFecha,DTFecha, EstadoReserva, Huesped *, Habitacion *);
        ~ReservaIndividual();
};

#endif