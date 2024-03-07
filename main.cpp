#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
#include <Animacion.hpp>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais;
    Alimento carne(10);

    firulais.Comer(carne);
    
    firulais.Jugar();
    firulais.Jugar();
    firulais.Jugar();

    cout<<"\nVida de firulais "<< firulais.GetVida()<<endl<<endl;

    Dibujo dibujo1("./assets/laracroft.txt");
    Dibujo dibujo2("./assets/banana.txt");



    list<Dibujo> dibujos;
    dibujos.push_back(dibujo1);
    dibujos.push_back(dibujo2);

    Animacion animacion (dibujos);
    animacion.Reproducir();


    return 0;
}
