#ifndef _DTUSUARIO_H
#define _DTUSUARIO_H

#include <string>
using namespace std;

class DTUsuario{
    protected:
        string nombre;
        string email;
        string password;
    public:
        DTUsuario();
        DTUsuario(string,string,string);
        string getNombre();
        string getEmail();
        string getPassword();
        ~DTUsuario();
};


#endif