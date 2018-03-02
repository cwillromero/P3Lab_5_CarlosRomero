//Bienvenido
#include <string>
#include <iostream>
#include <sstream>
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

using namespace std;

#ifndef ANIMALES_H
#define ANIMALES_H


//Inicio clase
class Animales{

    //Atributos
    private:
        string especie;
        string nombre;
        int tamanio;
        int tipo;
        Patas* patas;
        Pelaje* pelaje;
        Ojos* ojos;
        Orejas* orejas;
        Cola* cola;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Animales();
        Animales(string,string,int,int,Patas*,Pelaje*,Ojos*,Orejas*,Cola*);

        //metodos accersores / mutadores
        string getEspecie();
        void setEspecie(string);
        string getNombre();
        void setNombre(string);
        int getTamanio();
        void setTamanio(int);
        int getTipo();
        void setTipo(int);
        Patas* getPatas();
        void setPatas(Patas*);
        Pelaje* getPelaje();
        void setPelaje(Pelaje*);
        Ojos* getOjos();
        void setOjos(Ojos*);
        Orejas* getOrejas();
        void setOrejas(Orejas*);
        Cola* getCola();
        void setCola(Cola*);
	string toString();

    //Destructor
    ~Animales();


};//Fin de la clase


#endif
