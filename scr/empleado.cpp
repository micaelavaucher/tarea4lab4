#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include <cstring>
#include <string>
#include <iostream>

Empleado::Empleado(cargo _cargoEmpleado,string _nombre, string _email, string _password) :Usuario(_nombre, _email, _password)
{
    cargoEmpleado = _cargoEmleado;
};

Empleado::Empleado(){};

void Empleado::getCargoEmpleado(cargo _cargoEmpleado)
{
    cargoEmpleado = _cargoEmpleado;
};

cargo Empleado::getCargoEmpleado()
{
    return cargoEmpleado;
};

Empleado::~Empleado(){};