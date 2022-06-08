#ifndef _CONTROLADORUSUARIOS_H
#define _CONTROLADORUSUARIOS_H

#include <iostream>
#include <string>

#include "cargo.h"
#include "huesped.h"
#include "empleado.h"
#include "usuario.h"
#include "dthuesped.h"
#include "dtempleado.h"
#include "dtusuario.h"
//#include "dtcalificacion.h"

#include <iostream>
#include <string>


class ControladorUsuarios{
    private:
    /*
        Huesped ** huespedesHotel[];
        int topeHues;
        Empleado ** empleadosHotel[];
        int topeEm;
        Usuarios ** usuariosHotel[];
        int topeU;
        */
        static ControladorUsuarios* instance;
        ControladorUsuarios();
    public:
        static ControladorUsuarios* getInstance();
        void bajarSuscripcion();
        void buscarHuesped(string);
        void cancelarAlta();
        void confirmarAlta();
        DTUsuario devolverusuario();
        void elegirCargo(Cargo);
        void elegirEmpleado(string);
        void elegirHuesped(string);
        void elegirUsuario(string);
        void getDataEmpleado();
        void getEmpleado(string);
        void ingresarUsuario(DTUsuario);
        void liberar();
        void limpiarNotificaciones();
        DTEmpleado* listarEmpleados();
        DTHuesped* listarHuespedes();
        //DTCalificacion* listarNotificaciones();
        DTUsuario* listarUsuarios();
        void suscribir();
        ~ControladorUsuarios();
};



#endif