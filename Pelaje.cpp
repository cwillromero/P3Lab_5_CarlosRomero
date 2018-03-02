//Metodo sets ade gets

#include "Pelaje.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Pelaje::Pelaje(string color_pelaje,int grosor_pelaje,int largo_pelaje){
    this->color_pelaje=color_pelaje;
    this->grosor_pelaje=grosor_pelaje;
    this->largo_pelaje=largo_pelaje;
}//Fin constructor

//Constructor2
Pelaje::Pelaje(){

}//Fin constructor sencillo

string Pelaje::getColor_pelaje(){
    return color_pelaje;
}

void Pelaje:: setColor_pelaje(string color_pelaje){

    this->color_pelaje=color_pelaje;

}

int Pelaje::getGrosor_pelaje(){
    return grosor_pelaje;
}

void Pelaje:: setGrosor_pelaje(int grosor_pelaje){

    this->grosor_pelaje=grosor_pelaje;

}

int Pelaje::getLargo_pelaje(){
    return largo_pelaje;
}

void Pelaje:: setLargo_pelaje(int largo_pelaje){

    this->largo_pelaje=largo_pelaje;

}

Pelaje::~Pelaje(){

    cout<<"La instancia de Pelaje fue eliminada";

}
