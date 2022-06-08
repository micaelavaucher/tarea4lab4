#ifndef _DTRESERVAGRUPAL_H
#define _DTRESERVAGRUPAL_H

class DTReservaGrupal: public DTReserva{
    private: 
        DTHuesped ** huespedes;
        int tope;
    public:
        DTReservaGrupal(DTHuesped**,int,int,DTFecha,DTFecha,DTFecha,EstadoReserva,float,int);
        int getTope();
        DTHuesped ** getHuespedes();
        ~DTReservaGrupal();
};






#endif