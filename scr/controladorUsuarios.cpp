#include "../include/controladorUsuarios.h"
#include "../include/usuario.h"
#include "../include/huesped.h"
#include "../include/empleado.h"
#include "../include/dtusuario.h"
#include "../include/dtempleado.h"
#include "../include/dthuesped.h"
#include <cstring>
#include <string>
#include <iostream>


ControladorUsuarios* ControladorUsuarios::instance = 0;

ControladorUsuarios* ControladorUsuarios::getInstance()
{
    if (instance == 0)
    {
        instance = new ControladorUsuarios();
    }

    return instance;
}



void ControladorUsuarios::bajarSuscripcion(){

}
void ControladorUsuarios::buscarHuesped(string){

}
void ControladorUsuarios::cancelarAlta(){

}
        
void ControladorUsuarios::confirmarAlta(){

}
        
DTUsuario ControladorUsuarios::devolverusuario(){
 
}
        
void ControladorUsuarios::elegirCargo(Cargo){

}
        
void ControladorUsuarios::elegirEmpleado(string){

}
        
void ControladorUsuarios::elegirHuesped(string){

}
        
void ControladorUsuarios::elegirUsuario(string){

}
        
void ControladorUsuarios::getDataEmpleado(){

}
        
void ControladorUsuarios::getEmpleado(string){

}
  
        
void ControladorUsuarios::ingresarUsuario(DTUsuario){

}
        
void ControladorUsuarios::liberar(){

}
        
void ControladorUsuarios::limpiarNotificaciones(){

}
        
DTEmpleado* ControladorUsuarios::listarEmpleados(){

}
        
DTHuesped* ControladorUsuarios::listarHuespedes(){

}
        
/*DTCalificacion* ControladorUsuarios::listarNotificaciones(){

}*/
        
DTUsuario* ControladorUsuarios::listarUsuarios(){

}
        
void ControladorUsuarios::suscribir(){

}

ControladorUsuarios::~ControladorUsuarios(){

}