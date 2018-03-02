//Bienvenido
#include <string>
#include <iostream>
#include <vector>
#include "Animales"

using namespace std;

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H


//Inicio clase
class Zoologico{

    //Atributos
    private:
        vector<Animales *> zonaArtica;
        vector<Animales *> zonaDesertica;
        vector<Animales *> junglaTropical;
        vector<Animales *> sabana;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Zoologico();
        Zoologico(vector,vector,vector,vector);

        //metodos accersores / mutadores
        vector getZonaArtica();
        void setZonaArtica(vector);
        vector getZonaDesertica();
        void setZonaDesertica(vector);
        vecto getJunglaTropical();
        void setJunglaTropical(vector);
        vector getSabana();
        void setSabana(vector);

    //Destructor
    ~Zoologico();


};//Fin de la clase


#endif
