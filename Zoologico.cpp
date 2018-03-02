//Metodo sets ade gets

#include "Zoologico.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Zoologico::Zoologico(vector zonaArtica,vector zonaDesertica,vector junglaTropical,vector sabana){
    this->zonaArtica=zonaArtica;
    this->zonaDesertica=zonaDesertica;
    this->junglaTropical=junglaTropical;
    this->sabana=sabana;
}//Fin constructor

//Constructor2
Zoologico::Zoologico(){

}//Fin constructor sencillo

vector Zoologico::getZonaArtica(){
    return zonaArtica;
}

void Zoologico:: setZonaArtica(vector zonaArtica){

    this->zonaArtica=zonaArtica;

}

vector Zoologico::getZonaDesertica(){
    return zonaDesertica;
}

void Zoologico:: setZonaDesertica(vector zonaDesertica){

    this->zonaDesertica=zonaDesertica;

}

vector Zoologico::getJunglaTropical(){
    return junglaTropical;
}

void Zoologico:: setJunglaTropical(vector junglaTropical){

    this->junglaTropical=junglaTropical;

}

vector Zoologico::getSabana(){
    return sabana;
}

void Zoologico:: setSabana(vector sabana){

    this->sabana=sabana;

}

Zoologico::~Zoologico(){

    cout<<"La instancia de Zoologico fue eliminada";

}
