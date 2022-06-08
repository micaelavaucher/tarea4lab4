#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include <cstring>
#include <string>
#include <iostream>

Usuario::Usuario(string _nombre, string _email, string _password)
{
    nombre = _nombre;
    email = _email;
    password = _password;
};

Usuario::Usuario(){};

void Usuario::setNombre(string _nombre)
{
    nombre = _nombre;
};

void Usuario::setEmail(string _email)
{
    email = _email;
};

void Usuario::setPassword(string _password)
{
    password = _password;
};

string Usuario::getNombre()
{
    return nombre;
}

string Usuario::getEmail()
{
    return email;
}

string Usuario::getPassword()
{
    return password;
}

Usuario::~Usuario(){};