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
         << "4- Zona Sabana" << endl;
    cin >> tipo;
    while (tipo > 4 || tipo < 1)
    {
        cout << endl
             << "Tipo Incorrecto!! Ingrese el Tipo (Ejemplo: 1, 2, 3 o 4): ";
        endl << "1- Zona Ártica" << endl
             << "2- Zona Desértica" << endl
             << "3- Zona de Jungla Tropical" << endl
             << "4- Zona Sabana" << endl;
        cin >> tipo;
    }
    cout << "Patas" << endl;
    int cant_patas;
    int largo_patas;
    string tipo_patas;
    cout << "     Ingrese Cantidad de Patas: ";
    cin >> cant_patas;
    cout << endl
         << "     Ingrese Largo de Patas: ";
    cin >> largo_patas;
    count << endl
          << "    Ingrese Tipo de Patas (Ejemplo: Pezuñas, Garras,...): " cin >>
        tipo_patas;
    patas = new Patas(cant_patas, largo_patas, tipo_patas);
    cout << endl
         << "Pelaje" << endl;
    string color_pelaje;
    int grosor_pelaje;
    int largo_pelaje;
    cout << "     Ingrese Color de Pelaje: ";
    cin >> color_pelaje;
    cout << endl
         << "     Ingrese Grosor de Pelaje (Ejemplo: 19, 5, ...): ";
    cin >> grosor_pelaje;
    cout << "     Ingrese el Largo de Pelaje";
    cin >> largo_pelaje;
    pelaje = new Pelaje(color_pelaje, grosor_pelaje, largo_pelaje);
    cout << endl;
    string color_ojos;
    bool vision_nocturna;
    cout << "Ojos" << endl;
    cout << "     Ingrese Color de Ojos";
    cin >> color_ojos;
    int vn;
    cout << endl
         << "       Tiene Vision Nocturna? [1-Si, 0- No]: ";
    cin >> vn;
    if (cin == 1)
    {
        vision_nocturna == true;
    }
    else
    {
        vision_nocturna == false;
    }
    ojos = new Ojos(color_ojos, vision_nocturna);
    cout << endl
         << "Orejas" << endl;
    int tamanio_orejas;
    int capacidad_audicion;
    cout << "     Ingrese el Tamaño de las Orejas: ";
    con >> tamanio_orejas;
    cout << endl;
    cout << "     Ingrese Capacidad de Audicion (Ejemplo: 50, 45, 100,...): ";
    cin >> capacidad_audicion;
    cout << endl;
    orejas = new Orejas(tamanio_orejas, capacidad_audicion);
    cout << "Cola:" << endl;
    int largo_cola;
    bool peluda;
    cout << "     Ingrese el largo de la Cola: ";
    cin >> largo_cola;
    int pl;
    cout << endl
         << "       Es Peluda la Cola [1-Si, 0-No]";
    cin >> pl;
    if (pl == 1)
    {
        peluda = true;
    }
    else
    {
        peluda = false;
    }
    cola = new Cola();

    Animales *animal = new Animales(especie, nombre, tamanio, tipo, patas, pelaje, ojos, orejas, cola);
    return animal;
}

void EliminarAnimal(largo_cola, peluda);
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