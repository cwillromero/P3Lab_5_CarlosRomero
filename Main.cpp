#include <iostream>
using namespace std;
#include <sstream>
#include <typeinfo>
#include <vector>
//#include "Zoologico.h"
#include "Animales.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

//Menu principal del programa.
int menu();
//Prototipos de metodods
Animales CrearAnimal();
void EliminarAnimal();
void ListarAnimales(vector *<Animales>);
void TrasladarAnimales(vector *<Animales>);

int main()
{
    //Zoologico Global que tendra todos los a imale.s
    Zoologico Zoo;
    //Lista de espera de los animales al zoologico.
    vector<Animales *> Espera;

    bool Continuar = 1;
    while (Continuar)
    {
        //Llamado del menu del programa.
        switch (menu())
        {
        case 1:
        { // Agregar
            Espera.push_back(CrearAnimal());
            break;
        } //Fin del case 1.
        case 2:
        { // Eliminar.

            break;
        } //Fin del case 2

        case 3:
        { //Transferir

            break;
        } //Fin del case 3

        case 4:
        { //Listar
            break;
        } //Fin del case 4.
        default:
        { //SALIR
            Continuar = 0;
            break;
        } //FIn del default

        } //Fin del switch.
    }     //FIn del while.

    return 0;
}

//Menu principal del programa
int menu()
{
    int Respuesta = -100;
    while (Respuesta <= 0 || Respuesta > 4)
    {
        cout << endl
             << "-------Bienvenido al Zoologico ZIIE-------" << endl
             << "Seleccione la opción que desea : " << endl;
        cout << "1- Agregar Animal." << endl
             << "2- Eliminar Animal." << endl
             << "3- Transferir al zoológico." << endl
             << "4- Listar Animales" << endl
             << "5- Salir" << endl;
        cin >> Respuesta;
    }
    return Respuesta;
} //Fin del metodo del Menu.

//METODOS DEL PROGRAMA
Animales CrearAnimal()
{
    string especie;
    string nombre;
    int tamanio;
    int tipo;
    Patas *patas;
    Pelaje *pelaje;
    Ojos *ojos;
    Orejas *orejas;
    Cola *cola;
    cout << "Creación de Animal:" << endl;
    cout << "Ingrese Especie (Ejemplo: Iguana, Perro,...): ";
    cin >> especie;
    cout << endl
         << "Ingrese el Nombre (Ejemplo: Zack, Chilaquil,...): ";
    cin >> nombre;
    cout << endl
         << "Ingres el Tamaño en centimetros: (Ejemplo: 45, 100,...): ";
    cin >> tamanio;
    cout << endl
         << "Ingrese el Tipo (Ejemplo: 1, 2, 3 o 4): " << endl
         << "1- Zona Ártica" << endl
         << "2- Zona Desértica" << endl
         << "3- Zona de Jungla Tropical" << endl
         << "4- Zona Sabana";
    cin >> tipo;
    cout << endl;
    while (tipo > 4 || tipo < 1)
    {
        cout << endl
             << "Tipo Incorrecto!! Ingrese el Tipo (Ejemplo: 1, 2, 3 o 4): ";
        endl << "1- Zona Ártica" << endl
             << "2- Zona Desértica" << endl
             << "3- Zona de Jungla Tropical" << endl
             << "4- Zona Sabana";
        cin >> tipo;
        cout << endl;
    }
    
}

void EliminarAnimal()
{
}

void ListarAnimales(vector *<Animales>)
{
}
void TrasladarAnimales(vector *<Animales>)
{
}
/*
    vector<Persona*> personas;

    personas.push_back(new FireBender("pp","rasdsa", 9, "t", 8,6));
    personas.push_back(new FireBender("pp","asda", 9, "t", 8,6));
    personas.push_back(new Persona("c","rooko", 9, "t"));

    for(int i = 0; i<personas.size(); i++){
        cout<< personas[i]->getNombre() << endl;

    }


    for(int i = 0; i<personas.size(); i++){
        if(typeid(*personas[i]) == typeid(FireBender)){
            cout<< "sii "<< endl;
        }
        
       // cout<< typeid(FireBender).name()<< endl;
        //cout<< typeid(*personas[i]).name()<< endl;
    }

    delete personas[2];
    personas[2] = NULL;

    for(int i =0; i< personas.size(); i++){
        if(personas[i] == NULL){
            cout<< "vacio" << endl;
        }else{
            personas[i]->setNombre("ahora");
            cout<< personas[i]->getNombre() << i<< endl;
        }
    }

    */