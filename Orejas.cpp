//Metodo sets ade gets

#include "Orejas.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Orejas::Orejas(int tamanio_orejas,int capacidad_audicion){
    this->tamanio_orejas=tamanio_orejas;
    this->capacidad_audicion=capacidad_audicion;
}//Fin constructor

//Constructor2
Orejas::Orejas(){

}//Fin constructor sencillo

int Orejas::getTamanio_orejas(){
    return tamanio_orejas;
}

void Orejas:: setTamanio_orejas(int tamanio_orejas){

    this->tamanio_orejas=tamanio_orejas;

}

int Orejas::getCapacidad_audicion(){
    return capacidad_audicion;
}

void Orejas:: setCapacidad_audicion(int capacidad_audicion){

    this->capacidad_audicion=capacidad_audicion;

}

Orejas::~Orejas(){

    cout<<"La instancia de Orejas fue eliminada";

}
