#include "Zoologico.h"
#include "Animales.h"
#include "Patas.h"
#include "Pelaje.h"
#include "Ojos.h"
#include "Orejas.h"
#include "Cola.h"
#include <iostream>
using namespace std;
#include <sstream>
#include <unistd.h>
#include <typeinfo>
#include <vector>

int menu();
Animales *CrearAnimal();
vector<Animales *> EliminarAnimal(vector<Animales *>);
void Listar(Zoologico *);
Zoologico *Transferecia(string, int, int, vector<Animales *>, Zoologico *);
void Ordenar(Zoologico *);

int main()
{
    cout << "--------Laboratorio #5 - Carlos Romero----" << endl;
    string name;
    cout << "Ingrese el Nombre del Zoologico" << endl;
    cin >> name;
    int tamanio;
    cout << "Ingrese el Tamaño del Zoologico" << endl;
    cin >> tamanio;
    vector<Animales *> listaEspera;
    int personas;
    cout << "Ingrese la Capacidad de Personas del Zoologico" << endl;
    cin >> personas;
    int opcion;
    Zoologico *Zool;
    while (opcion != 5)
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
        {
            listaEspera.push_back(CrearAnimal());
            break;
        }
        case 2:
        {
            if (listaEspera.size() != 0)
            {
                for (int i = 0; i < listaEspera.size(); i++)
                {
                    if (listaEspera[i] != NULL)
                    {
                        cout << i << ") " << listaEspera[i]->toString() << endl;
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
                delete listaEspera[pos];
                listaEspera[pos] = NULL;
                //listaEspera = EliminarAnimal(listaEspera);
            }
            else
            {
                cout << "Debe crear animales Primero" << endl;
            }
            break;
        }

        case 3:
        {
            Zool = Transferecia(name, tamanio, personas, listaEspera, Zool);
            break;
        }

        case 4:
        {
            Listar(Zool);
            /*for (int i = 0; i < listaEspera.size(); i++){
                delete listaEspera[i];
                listaEspera[i] = NULL;
            }*/
            Ordenar(Zool);
            break;
        }
        case 5:
        {
            break;
            exit(0);
        }
        }
    }

    return 0;
}

int menu()
{
    int r = 6;
    while (r > 5 || r <= 0)
    {
        cout << endl
             << "-------Laboratorio #5 Carlos Romero-------" << endl
             << "Seleccione la opción que desea : " << endl;
        cout << "1- Agregar un Animal." << endl
             << "2- Eliminar Animal." << endl
             << "3- Transferir al zoológico." << endl
             << "4- Listar Animales" << endl
             << "5- Salir" << endl;
        cin >> r;
    }
    return r;
}

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
         << "     Es Peluda la Cola [1-Si, 0-No]: ";
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

vector<Animales *> EliminarAnimal(vector<Animales *> listaEspera)
{
    for (int i = 0; i < listaEspera.size(); i++)
    {
        if (listaEspera[i]->getNombre().size() != 0)
        {
            cout << i << ") " << listaEspera[i]->toString() << endl;
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
    delete listaEspera[pos];
    listaEspera[pos] = NULL;
    return listaEspera;
}

void Listar(Zoologico *zoo)
{
    cout << "---ANIMALES---" << endl;
    cout << "Animales del Zona Artica" << endl;
    for (int i = 0; i < zoo->getZonaArtica().size(); i++)
    {
        if (zoo->getZonaArtica()[i] != NULL)
        {
            cout << i << ") " << zoo->getZonaArtica()[i]->toString() << endl;
        }
    }
    cout << "Animales del Zona Desertica" << endl;
    for (int i = 0; i < zoo->getZonaDesertica().size(); i++)
    {
        if (zoo->getZonaDesertica()[i] != NULL)
        {
            cout << i << ") " << zoo->getZonaDesertica()[i]->toString() << endl;
        }
    }
    cout << "Animales de Jungla Tropical" << endl;
    for (int i = 0; i < zoo->getJunglaTropical().size(); i++)
    {
        if (zoo->getJunglaTropical()[i] != NULL)
        {
            cout << i << ") " << zoo->getJunglaTropical()[i]->toString() << endl;
        }
    }

    cout << "Animales de Sabana " << endl;
    for (int i = 0; i < zoo->getSabana().size(); i++)
    {
        if (zoo->getSabana()[i] != NULL)
        {
            cout << i << ") " << zoo->getSabana()[i]->toString() << endl;
        }
    }
}

Zoologico *Transferecia(string name, int tam, int personas, vector<Animales *> listaEspera, Zoologico *zoo)
{
    zoo = new Zoologico(name, tam, personas);
    for (int i = 0; i < listaEspera.size(); i++)
    {
        if (listaEspera[i] != NULL)
        {
            if (listaEspera[i]->getTipo() == 1)
            {
                zoo->setZonaArtica(listaEspera[i]);
            }
            else if (listaEspera[i]->getTipo() == 2)
            {
                zoo->setZonaDesertica(listaEspera[i]);
            }
            else if (listaEspera[i]->getTipo() == 3)
            {
                zoo->setJunglaTropical(listaEspera[i]);
            }
            else if (listaEspera[i]->getTipo() == 4)
            {
                zoo->setSabana(listaEspera[i]);
            }
        }
    }
    cout << "Animales Trasladados" << endl;
    usleep(1000000);
    return zoo;
}

void Ordenar(Zoologico *z)
{
    cout<<endl<<"--Ordenado---"<<endl;
    vector<Animales*> ZA=z->getZonaArtica();
    cout<<"Zona Artica"<<endl;
    for (int i = 0; i < ZA.size(); i++)
    {
        for (int j = i + 1; j < ZA.size(); j++)
        {
            Animales *temp = ZA[i];
            Animales *temp2 = ZA[j];
            int x = temp->getNombre().at(0);
            int y = temp2->getNombre().at(0);
            if (x > y)
            {
                ZA[j] = temp;
                ZA[j-1] = temp2;
                ;
            }
        }
    }
    for(int i=0; i<ZA.size(); i++){
        cout<<ZA[i]->toString()<<endl;
    }

    vector<Animales*> ZD=z->getZonaDesertica();
    cout<<"Zona Desertica"<<endl;
    for (int i = 0; i < ZD.size(); i++)
    {
        for (int j = i + 1; j < ZD.size(); j++)
        {
            Animales *temp = ZD[i];
            Animales *temp2 = ZD[j];
            int x = temp->getNombre().at(0);
            int y = temp2->getNombre().at(0);
            if (x > y)
            {
                ZD[j] = temp;
                ZD[j-1] = temp2;
                ;
            }
        }
    }
    for(int i=0; i<ZD.size(); i++){
        cout<<ZD[i]->toString()<<endl;
    }

    vector<Animales*> JT=z->getJunglaTropical();
    cout<<"Jungla Tropical"<<endl;
    for (int i = 0; i < JT.size(); i++)
    {
        for (int j = i + 1; j < JT.size(); j++)
        {
            Animales *temp = JT[i];
            Animales *temp2 = JT[j];
            int x = temp->getNombre().at(0);
            int y = temp2->getNombre().at(0);
            if (x > y)
            {
                JT[j] = temp;
                JT[j-1] = temp2;
                ;
            }
        }
    }
    for(int i=0; i<JT.size(); i++){
        cout<<JT[i]->toString()<<endl;
    }

    vector<Animales*> S=z->getSabana();
    cout<<"Sabana"<<endl;
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = i + 1; j < S.size(); j++)
        {
            Animales *temp = S[i];
            Animales *temp2 = S[j];
            int x = temp->getNombre().at(0);
            int y = temp2->getNombre().at(0);
            if (x > y)
            {
                S[j] = temp;
                S[j-1] = temp2;
                ;
            }
        }
    }
    for(int i=0; i<S.size(); i++){
        cout<<S[i]->toString()<<endl;
    }


}