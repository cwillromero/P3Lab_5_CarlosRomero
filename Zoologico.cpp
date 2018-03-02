//Metodo sets ade gets

#include "Zoologico.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Zoologico::Zoologico(vector<Animales *> zonaArtica,vector<Animales *> zonaDesertica,vector<Animales *> junglaTropical,vector<Animales *> sabana){
    this->zonaArtica=zonaArtica;
    this->zonaDesertica=zonaDesertica;
    this->junglaTropical=junglaTropical;
    this->sabana=sabana;
}//Fin constructor

//Constructor2
Zoologico::Zoologico(){

}//Fin constructor sencillo

vector<Animales *> Zoologico::getZonaArtica(){
    return zonaArtica;
}

void Zoologico:: setZonaArtica(vector<Animales *> zonaArtica){

    this->zonaArtica=zonaArtica;

}

vector<Animales *> Zoologico::getZonaDesertica(){
    return zonaDesertica;
}

void Zoologico:: setZonaDesertica(vector<Animales *> zonaDesertica){

    this->zonaDesertica=zonaDesertica;

}

vector<Animales *> Zoologico::getJunglaTropical(){
    return junglaTropical;
}

void Zoologico:: setJunglaTropical(vector<Animales *> junglaTropical){

    this->junglaTropical=junglaTropical;

}

vector<Animales *> Zoologico::getSabana(){
    return sabana;
}

void Zoologico:: setSabana(vector<Animales *> sabana){

    this->sabana=sabana;

}

Zoologico::~Zoologico(){

    cout<<"La instancia de Zoologico fue eliminada"<<endl;

}
