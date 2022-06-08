#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include <cstring>
#include <string>
#include <iostream>

DTHuesped::DTHuesped(bool _esFinger,string _nombre, string _email, string _password) :DTUsuario(_nombre, _email, _password)
{
    esFinger = _esFinger;
};

DTHuesped::DTHuesped(){};


bool DTHuesped::getEsFinger()
{
    return esFinger;
};

DTHuesped::~DTHuesped(){};