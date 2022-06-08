#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include "../include/cargo.h"
#include <cstring>
#include <string>
#include <iostream>

DTEmpleado::DTEmpleado(Cargo _cargoEmpleado,string _nombre, string _email, string _password) :DTUsuario(_nombre, _email, _password)
{
    cargoEmpleado = _cargoEmpleado;
};

DTEmpleado::DTEmpleado(){};

Cargo DTEmpleado::getCargoEmpleado()
{
    return cargoEmpleado;
};

DTEmpleado::~DTEmpleado(){};