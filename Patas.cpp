//Metodo sets ade gets

#include "Patas.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Patas::Patas(int cant_patas,int largo_patas,string tipo_patas){
    this->cant_patas=cant_patas;
    this->largo_patas=largo_patas;
    this->tipo_patas=tipo_patas;
}//Fin constructor

//Constructor2
Patas::Patas(){

}//Fin constructor sencillo

int Patas::getCant_patas(){
    return cant_patas;
}

void Patas:: setCant_patas(int cant_patas){

    this->cant_patas=cant_patas;

}

int Patas::getLargo_patas(){
    return largo_patas;
}

void Patas:: setLargo_patas(int largo_patas){

    this->largo_patas=largo_patas;

}

string Patas::getTipo_patas(){
    return tipo_patas;
}

void Patas:: setTipo_patas(string tipo_patas){

    this->tipo_patas=tipo_patas;

}

Patas::~Patas(){

    cout<<"La instancia de Patas fue eliminada";

}
