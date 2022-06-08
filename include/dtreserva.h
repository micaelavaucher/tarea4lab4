#ifndef _DTRESERVA_H
#define _DTRESERVA_H

class DTReserva{
    private:
        int codigo;
        DTFecha checkIn;
        DTFecha checkOut;
        DTFecha fecha;
        EstadoReserva estado;
        int habitacion;   
    public:
        DTReserva();
        DTReserva(int,DTFecha,DTFecha,DTFecha,EstadoReserva,int);
        int getCodigo();
        DTFecha getCheckIn();
        DTFecha getCheckOut();
        DTFecha getFecha();
        EstadoReserva getEstado();
        int getHabitacion();
        virtual ~DTReserva();
};









#endif