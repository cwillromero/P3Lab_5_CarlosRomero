//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef PATAS_H
#define PATAS_H


//Inicio clase
class Patas{

    //Atributos
    private:
        int cant_patas;
        int largo_patas;
        string tipo_patas;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Patas();
        Patas(int,int,string);

        //metodos accersores / mutadores
        int getCant_patas();
        void setCant_patas(int);
        int getLargo_patas();
        void setLargo_patas(int);
        string getTipo_patas();
        void setTipo_patas(string);

    //Destructor
    ~Patas();


};//Fin de la clase


#endif
