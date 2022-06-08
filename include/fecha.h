#ifndef _FECHA_H
#define _FECHA_H
class Fecha{
    private: 
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;
    public:
        Fecha(int,int,int, int, int);
        void setDia(int);
        void setMes(int);
        void setAnio(int);
        void setHora(int);
        void setMinuto(int);
        int getDia();
        int getMes();
        int getAnio();
        int getHora();
        int getMinuto();
        void modificar(int,int,int, int, int);
        ~Fecha();
};
#endif