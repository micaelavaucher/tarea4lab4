#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include <cstring>
#include <string>
#include <iostream>

DTUsuario::DTUsuario(string _nombre, string _email, string _password)
{
    nombre = _nombre;
    email = _email;
    password = _password;
};

DTUsuario::DTUsuario(){};

string DTUsuario::getNombre()
{
    return nombre;
}

string DTUsuario::getEmail()
{
    return email;
}

string DTUsuario::getPassword()
{
    return password;
}

DTUsuario::~DTUsuario(){};