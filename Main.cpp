#include <iostream>
using namespace std;
#include <sstream>
#include <unistd.h>
#include <typeinfo>
#include <vector>
#include "Zoologico.h"
#include "Animales.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"

//Menu principal del programa.
int menu();
//Prototipos de metodods
Animales *CrearAnimal();
void EliminarAnimal(vector<Animales *>);
void ListarAnimales(vector<Animales *>);
void TrasladarAnimales(vector<Animales *>);

int main()
{
    //Zoologico Global que tendra todos los a imale.s
    Zoologico Zoo;
    //Lista de listaEspera de los animales al zoologico.
    vector<Animales *> listaEspera;

    int opcion;
    while (opcion != 5)
    {
        //Llamado del menu del programa.
        opcion = menu();
        switch (opcion)
        {
        case 1:
        { // Agregar
            listaEspera.push_back(CrearAnimal());
            break;
        } //Fin del case 1.
        case 2:
        { // Eliminar.
            if (listaEspera.size() != 0)
            {
                EliminarAnimal(listaEspera);
            }
            else
            {
                cout << "Debe crear animales Primero" << endl;
            }
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
        case 5:
        { //SALIR
            break;
            exit(0);
        } //FIn del default

        } //Fin del switch.
    }     //FIn del while.

    return 0;
}

//Menu principal del programa
int menu()
{
    int Respuesta = -1;
    ;
    while (Respuesta <= 0 || Respuesta > 5)
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
Animales *CrearAnimal()
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
             << "Tipo Incorrecto!! Ingrese el Tipo (Ejemplo: 1, 2, 3 o 4): " << endl
             << "1- Zona Ártica" << endl
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
    cout << endl
         << "     Ingrese Tipo de Patas (Ejemplo: Pezuñas, Garras,...): ";
    cin >> tipo_patas;
    patas = new Patas(cant_patas, largo_patas, tipo_patas);
    cout << endl
         << "Pelaje" << endl;
    string color_pelaje;
    int grosor_pelaje;
    int largo_pelaje;
    cout << endl
         << "     Ingrese Color de Pelaje: ";
    cin >> color_pelaje;
    cout << endl
         << "     Ingrese Grosor de Pelaje (Ejemplo: 19, 5, ...): ";
    cin >> grosor_pelaje;
    cout << endl
         << "     Ingrese el Largo de Pelaje: ";
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
         << "     Tiene Vision Nocturna? [1-Si, 0- No]: ";
    cin >> vn;
    if (vn == 1)
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
    cin >> tamanio_orejas;
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
         << "       Es Peluda la Cola [1-Si, 0-No]: ";
    cin >> pl;
    if (pl == 1)
    {
        peluda = true;
    }
    else
    {
        peluda = false;
    }
    cola = new Cola(largo_cola, peluda);

    Animales *animal = new Animales(especie, nombre, tamanio, tipo, patas, pelaje, ojos, orejas, cola);
    cout << "Animal Creado..." << endl;
    usleep(1000000);
    cout << animal->toString() << endl;
    return animal;
}

void EliminarAnimal(vector<Animales *> listaEspera)
{
    for (int i = 0; i < listaEspera.size(); i++)
    {
        if (espera[i] != NULL)
        {
            cout << i << ") " << *listaEspera[i] << endl;
        }
    }
    int pos;
    cout << "Ingrese el Animal A Eliminar: ";
    cin >> pos;
    cout << endl;
    while (pos < 0 || pos >= listaEspera.size())
    {

        cout << "Esa Posicion no Existe!. Ingrese el Animal A Eliminar: ";
        cin >> pos;
        cout << endl;
    }
    delete listalistaEspera[i];
    listaEspera[i] = NULL;
}

void ListarAnimales(vector<Animales *>)
{
}

void TrasladarAnimales(vector<Animales *>)
{
}