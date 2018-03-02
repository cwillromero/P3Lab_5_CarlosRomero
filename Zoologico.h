//Bienvenido
#include <string>
#include <iostream>
#include <vector>
#include "Animales.h"

using namespace std;

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H


//Inicio clase
class Zoologico{

    //Atributos
    private:
	string nombre;
	int tamanio;
	int capacidad;
        vector<Animales *> zonaArtica;
        vector<Animales *> zonaDesertica;
        vector<Animales *> junglaTropical;
        vector<Animales *> sabana;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Zoologico(string, int, int);

        //metodos accersores / mutadores
        vector<Animales *> getZonaArtica();
        void setZonaArtica(Animales *);
        vector<Animales *> getZonaDesertica();
        void setZonaDesertica(Animales *);
        vector<Animales *> getJunglaTropical();
        void setJunglaTropical(Animales *);
        vector<Animales *> getSabana();
        void setSabana(Animales *);

    //Destructor
    ~Zoologico();


};//Fin de la clase


#endif
