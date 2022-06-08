#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include <cstring>
#include <string>
#include <iostream>

Huesped::Huesped(bool _esFinger,string _nombre, string _email, string _password) :Usuario(_nombre, _email, _password)
{
    esFinger = _esFinger;
}

Huesped::Huesped(){};

void Huesped::setEsFinger(bool _esFinger)
{
    esFinger = _esFinger;
};

bool Huesped::getEsFinger()
{
    return esFinger;
};

Huesped::~Huesped(){};