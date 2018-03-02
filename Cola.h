//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef COLA_H
#define COLA_H


//Inicio clase
class Cola{

    //Atributos
    private:
        int largo_cola;
        bool peluda;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Cola();
        Cola(int,bool);

        //metodos accersores / mutadores
        int getLargo_cola();
        void setLargo_cola(int);
        bool getPeluda();
        void setPeluda(bool);

    //Destructor
    ~Cola();


};//Fin de la clase


#endif
