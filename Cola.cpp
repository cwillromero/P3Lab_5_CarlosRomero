//Metodo sets ade gets

#include "Cola.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Cola::Cola(int largo_cola,bool peluda){
    this->largo_cola=largo_cola;
    this->peluda=peluda;
}//Fin constructor

//Constructor2
Cola::Cola(){

}//Fin constructor sencillo

int Cola::getLargo_cola(){
    return largo_cola;
}

void Cola:: setLargo_cola(int largo_cola){

    this->largo_cola=largo_cola;

}

bool Cola::getPeluda(){
    return peluda;
}

void Cola:: setPeluda(bool peluda){

    this->peluda=peluda;

}

Cola::~Cola(){

    cout<<"La instancia de Cola fue eliminada";

}
