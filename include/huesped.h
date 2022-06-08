#ifndef _HUESPED_H
#define _HUESPED_H

#include <iostream>
#include <string>


using namespace std;

class Huesped : public Usuario{
    private: 
        bool esFinger;
    public:
        Huesped();
        Huesped(bool,string,string,string);
        void setEsFinger(bool);
        bool getEsFinger();
        ~Huesped();
};
#endif