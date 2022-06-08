#ifndef _DTHABITACION_H
#define _DTHABITACION_H
class DTHabitacion{
    private: 
        int numero;
        float precio;
        int capacidad;
    public:
        DTHabitacion();
        DTHabitacion(int,float,int);
        int getNumero();
        float getPrecio();
        int getCapacidad();
        ~DTHabitacion();
};
#endif