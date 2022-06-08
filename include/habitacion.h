#ifndef _HABITACION_H
#define _HABITACION_H

#include "dthabitacion.h"

class Habitacion{
    private: 
        int numero;
        float precio;
        int capacidad;
    public:
        Habitacion(int,float,int);
        void setNumero(int);
        void setPrecio(float);
        void setCapacidad(int);
        int getNumero();
        float getPrecio();
        int getCapacidad();
        DTHabitacion getData();
        ~Habitacion();
};
#endif