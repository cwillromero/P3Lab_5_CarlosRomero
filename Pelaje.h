//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef PELAJE_H
#define PELAJE_H


//Inicio clase
class Pelaje{

    //Atributos
    private:
        string color_pelaje;
        int grosor_pelaje;
        int largo_pelaje;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Pelaje();
        Pelaje(string,int,int);

        //metodos accersores / mutadores
        string getColor_pelaje();
        void setColor_pelaje(string);
        int getGrosor_pelaje();
        void setGrosor_pelaje(int);
        int getLargo_pelaje();
        void setLargo_pelaje(int);

    //Destructor
    ~Pelaje();


};//Fin de la clase


#endif
