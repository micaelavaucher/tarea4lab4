#ifndef _DTRESERVAINDIVIDUAL_H
#define _DTRESERVAINDIVIDUAL_H

class DTReservaIndividual: public DTReserva{
    public: 
        DTReservaIndividual(int,DTFecha,DTFecha,DTFecha,EstadoReserva,float,int);
        ~DTReservaIndividual();
};


#endif