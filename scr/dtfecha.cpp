
#include <cstring>
#include <string>
#include <iostream>




DTFecha::DTFecha(int dia_,int mes_,int anio_, int hora_, int minuto_){
    dia = dia_;
    mes = mes_;
    anio = anio_;
    hora = hora_;
    minuto = minuto_;
}
int DTFecha::getDia(){
    return dia;
};

int DTFecha::getMes(){
    return mes;
};

int DTFecha::getAnio(){
    return anio;
};

int DTFecha::getHora(){
    return hora;
};

int DTFecha::getMinuto(){
    return minuto;
};