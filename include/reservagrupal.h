#ifndef _RESERVAGRUPAL_H
#define _RESERVAGRUPAL_H

class ReservaGrupal : public Reserva{
    private: 
        Huesped ** huespedes;
        int tope;
    public:
        ReservaGrupal(Huesped**, int, int, DTFecha, DTFecha, EstadoReserva, Huesped *, Habitacion *);
         void setHuesped(Huesped*);
        Huesped ** getHuespedes();
        //float calcularCosto();
        ~ReservaGrupal();
};

#endif