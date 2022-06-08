#ifndef _DTEMPLEADO_H
#define _DTEMPLEADO_H

#include <iostream>
#include <string>
#include "cargo.h"

using namespace std;

class DTEmpleado : public DTUsuario{
    private: 
        Cargo cargoEmpleado;
    public:
        DTEmpleado();
        DTEmpleado(Cargo,string,string,string);
        Cargo getCargoEmpleado();
        ~DTEmpleado();
};
#endif