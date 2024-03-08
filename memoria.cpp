#include <iostream>
using namespace std;

class Personaje{
    private:

    public:
        Personaje(){

        }

        ~Personaje(){}

        void Hablar(){
            
        }

}

class Enano{
    private:
    int vida;
        float altura;
        int edad;

    public:

        Enano(){

        }

        ~Enano(){

        }

        void inicializar(){
            this->altura = 2;
            this->edad = 150;
            this->vida = 10;
        }

        void Comer(){
            this-> += 1;
        }
};

int main(){

    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout<<"Tamaño tipos de datos nativos: "<<endl;
    cout<<"Tamaño int: "<<sizeof(int)<<" bytes."<<endl;
    cout<<"Tamaño bool: "<<sizeof(bool)<<" bytes."<<endl;
    cout<<"Tamaño float: "<<sizeof(float)<<" bytes."<<endl;
    cout<<"Tamaño double: "<<sizeof(double)<<" bytes."<<endl;
    cout<<"Tamaño char: "<<sizeof(char)<<" bytes."<<endl;
    cout<<"Tamaño Enano: "<<sizeof(Enano)<<" bytes."<<endl;
    

    cout<<"Memoria Estatica en C/C++: "<<endl;
    cout<<"Direccion de int: "<<&i<<endl;
    cout<<"Direccion de bool: "<<&b<<endl;
    cout<<"Direccion de float: "<<&f<<endl;
    cout<<"Direccion de double: "<<&d<<endl;
    cout<<"Direccion de char: "<<static_cast<void*>(&c)<<endl;
    cout<<"Direccion de Enano: "<<&e<<endl;

    cout<<endl;
    cout<<"Memoria dinamica en C/C++: "<<endl;
    cout<<"Direccion Dinamica: "<<malloc(2)<<endl;
    cout<<"Direccion Dinamica int: "<<malloc(sizeof(int))<<endl;

    //Casteo de punteros en C
    Enano* direccion = (Enano*)malloc(sizeof(int));
                                     //ESTAS 2 HACEN LO MISMO                       
    





    //Punteros en C++
    Enano* instancia = new Enano;


    return 0;
}