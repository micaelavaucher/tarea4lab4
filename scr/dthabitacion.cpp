#include <iostream>
#include <string>




DTHabitacion::DTHabitacion(int numero_, float precio_, int capacidad_){
    numero = numero_;
    precio = precio_;
    capacidad = capacidad_;
};

int DTHabitacion::getNumero(){
    return numero;
};

float DTHabitacion::getPrecio(){
    return precio;
};

int DTHabitacion::getCapacidad(){
    return capacidad;
};