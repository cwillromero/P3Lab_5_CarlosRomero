//Metodo sets ade gets

#include "Ojos.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Ojos::Ojos(string color_ojos,bool vision_nocturna){
    this->color_ojos=color_ojos;
    this->vision_nocturna=vision_nocturna;
}//Fin constructor

//Constructor2
Ojos::Ojos(){

}//Fin constructor sencillo

string Ojos::getColor_ojos(){
    return color_ojos;
}

void Ojos:: setColor_ojos(string color_ojos){

    this->color_ojos=color_ojos;

}

bool Ojos::getVision_nocturna(){
    return vision_nocturna;
}

void Ojos:: setVision_nocturna(bool vision_nocturna){

    this->vision_nocturna=vision_nocturna;

}

Ojos::~Ojos(){

    cout<<"La instancia de Ojos fue eliminada";

}
