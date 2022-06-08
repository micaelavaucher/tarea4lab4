#ifndef _USUARIO_H
#define _USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario{
    protected:
        string nombre;
        string email;
        string password;
    public:
        Usuario();
        Usuario(string,string,string);
        void setNombre(string);
        void setEmail(string);
        void setPassword(string);
        string getNombre();
        string getEmail();
        string getPassword();
        ~Usuario();
};


#endif