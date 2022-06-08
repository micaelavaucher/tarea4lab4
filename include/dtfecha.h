#ifndef _DTFECHA_H
#define _DTFECHA_H

class DTFecha{
    private:
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;
    public:
        DTFecha();
        DTFecha(int,int,int, int, int);
        int getDia();
        int getMes();
        int getAnio();
        int getHora();
        int getMinuto();
        ~DTFecha();
};


#endif
