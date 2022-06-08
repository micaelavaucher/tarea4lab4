#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include <string>
using namespace std;

class Empleado : public Usuario{
    private: 
        cargo cargoEmpleado;
    public:
        Empleado();
        Empleado(cargo,string,string,string);
        void setCargoEmpleado(cargo);
        cargo getCargoEmpleado();
        ~Empleado();
};
#endif