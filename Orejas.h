//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef OREJAS_H
#define OREJAS_H


//Inicio clase
class Orejas{

    //Atributos
    private:
        int tamanio_orejas;
        int capacidad_audicion;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Orejas();
        Orejas(int,int);

        //metodos accersores / mutadores
        int getTamanio_orejas();
        void setTamanio_orejas(int);
        int getCapacidad_audicion();
        void setCapacidad_audicion(int);

    //Destructor
    ~Orejas();


};//Fin de la clase


#endif
