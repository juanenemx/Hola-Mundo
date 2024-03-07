#pragma once
#include <iostream>
#include <list>
#include <Dibujo.hpp>
#include <string>
#include <fstream>

using namespace std;

class Animacion{
    private:
        list<Dibujo> fotogramas;
    
    public:
        Animacion(list<Dibujo> fotogramas){
            this->fotogramas = fotogramas;
        }

        ~Animacion(){

        }

        void Reproducir(){
            for (Dibujo dibbujo : fotogramas){
                dibbujo.Dibujar();
            }
        }

        /*bool operator==( Empleados otro) 
        {
            // Comparar por el código
            return getCodigo() == otro.getCodigo();
        }*/
};
