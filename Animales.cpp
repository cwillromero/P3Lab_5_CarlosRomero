//Metodo sets ade gets

#include "Animales.h"
#include <sstream>
#include <iostream>
#include <string>
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

using namespace std;

//Cosntructor 1
Animales::Animales(string especie,string nombre,int tamanio,int tipo,Patas* patas,Pelaje* pelaje,Ojos* ojos,Orejas* orejas,Cola* cola){
    this->especie=especie;
    this->nombre=nombre;
    this->tamanio=tamanio;
    this->tipo=tipo;
    this->patas=patas;
    this->pelaje=pelaje;
    this->ojos=ojos;
    this->orejas=orejas;
    this->cola=cola;
}//Fin constructor

//Constructor2
Animales::Animales(){

}//Fin constructor sencillo

string Animales::getEspecie(){
    return especie;
}

void Animales:: setEspecie(string especie){

    this->especie=especie;

}

string Animales::getNombre(){
    return nombre;
}

void Animales:: setNombre(string nombre){

    this->nombre=nombre;

}

int Animales::getTamanio(){
    return tamanio;
}

void Animales:: setTamanio(int tamanio){

    this->tamanio=tamanio;

}

int Animales::getTipo(){
    return tipo;
}

void Animales:: setTipo(int tipo){

    this->tipo=tipo;

}

Patas* Animales::getPatas(){
    return patas;
}

void Animales:: setPatas(Patas* patas){

    this->patas=patas;

}

Pelaje* Animales::getPelaje(){
    return pelaje;
}

void Animales:: setPelaje(Pelaje* pelaje){

    this->pelaje=pelaje;

}

Ojos* Animales::getOjos(){
    return ojos;
}

void Animales:: setOjos(Ojos* ojos){

    this->ojos=ojos;

}

Orejas* Animales::getOrejas(){
    return orejas;
}

void Animales:: setOrejas(Orejas* orejas){

    this->orejas=orejas;

}

Cola* Animales::getCola(){
    return cola;
}

void Animales:: setCola(Cola* cola){

    this->cola=cola;

}

Animales::~Animales(){

    cout<<"La instancia de Animales fue eliminada"<<endl;

}

string Animales:: toString(){
    string retValue;
    stringstream str;
    str<<"Especie: "<<especie<<",  Nombre: "<<nombre<<", Tamaño: "<<tamanio<<"cm, Tipo: "<<tipo;
    getline(str,retValue);
    return retValue;
}
