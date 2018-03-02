//Bienvenido
#include <string>
#include <iostream>

using namespace std;

#ifndef OJOS_H
#define OJOS_H


//Inicio clase
class Ojos{

    //Atributos
    private:
        string color_ojos;
        bool vision_nocturna;


    //metodos publicos
    public:
        //prototipos de metodos
        //constructor
        Ojos();
        Ojos(string,bool);

        //metodos accersores / mutadores
        string getColor_ojos();
        void setColor_ojos(string);
        bool getVision_nocturna();
        void setVision_nocturna(bool);

    //Destructor
    ~Ojos();


};//Fin de la clase


#endif
