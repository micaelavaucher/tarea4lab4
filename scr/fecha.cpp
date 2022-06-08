#include "../include/fecha.h"
#include "../include/dtfecha.h"


Fecha::Fecha(int dia_,int mes_,int anio_, int hora_, int minuto_){
    dia = dia_;
    mes = mes_;
    anio = anio_;
    hora = hora_;
    minuto = minuto_;
}

void Fecha::setDia(int dia_){
    dia =  dia_;
}

void Fecha::setMes(int mes_){
    mes =  mes_;
}

void Fecha::setAnio(int anio_){
    anio =  anio_;
}

void Fecha::setHora(int hora_){
    hora =  hora_;
}

void Fecha::setMinuto(int minuto_){
    minuto =  minuto_;
}

int Fecha::getDia(){
    return dia;
};

int Fecha::getMes(){
    return mes;
};

int Fecha::getAnio(){
    return anio;
};

int Fecha::getHora(){
    return hora;
};

int Fecha::getMinuto(){
    return minuto;
};


void Fecha::modificar(int minuto_, int hora_,int dia_, int mes_, int anio_){
    dia = dia_;
    mes = mes_;
    anio = anio_;
    hora = hora_;
    minuto = minuto_;
}

/*

        void modificar(int,int,int, int, int);
*/