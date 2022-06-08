#include "../include/habitacion.h"
#include "../include/dthabitacion.h"





Habitacion::Habitacion(int numero_, float precio_, int capacidad_){
    numero = numero_;
    precio = precio_;
    capacidad = capacidad_;
};

void Habitacion::setNumero(int numero_){
    numero = numero_;
};

void Habitacion::setPrecio(float precio_){
    precio = precio_;
};

void Habitacion::setCapacidad(int capacidad_){
    capacidad = capacidad_;
};

int Habitacion::getNumero(){
    return numero;
};

float Habitacion::getPrecio(){
    return precio;
};

int Habitacion::getCapacidad(){
    return capacidad;
};

DTHabitacion Habitacion::getData(){
    return DTHabitacion(numero, precio, capacidad);
};

 Habitacion::~Habitacion(){
     
 };