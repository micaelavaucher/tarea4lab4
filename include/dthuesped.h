#ifndef _DTHUESPED_H
#define _DTHUESPED_H

#include <string>
using namespace std;

class DTHuesped : public DTUsuario{
    private: 
        bool esFinger;
    public:
        DTHuesped();
        DTHuesped(bool,string,string,string);
        bool getEsFinger();
        ~DTHuesped();
};
#endif