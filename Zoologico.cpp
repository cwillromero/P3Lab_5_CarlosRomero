//Metodo sets ade gets

#include "Zoologico.h"
#include <iostream>
#include <string>

using namespace std;

//Constructor2
Zoologico::Zoologico(string nombre, int tamanio, int capacidad)
{
    this->nombre=nombre;
    this->tamanio=tamanio;
    this->capacidad=capacidad;
    vector<Animales *> zonaArtica;
    vector<Animales *> zonaDesertica;
    vector<Animales *> junglaTropical;
    vector<Animales *> sabana;
} //Fin constructor sencillo

vector<Animales *> Zoologico::getZonaArtica()
{
    return zonaArtica;
}

void Zoologico::setZonaArtica(Animales *animal)
{
    zonaArtica.push_back(animal);
}

vector<Animales *> Zoologico::getZonaDesertica()
{
    return zonaDesertica;
}

void Zoologico::setZonaDesertica(Animales *animal)
{

    zonaDesertica.push_back(animal);
}

vector<Animales *> Zoologico::getJunglaTropical()
{
    return junglaTropical;
}

void Zoologico::setJunglaTropical(Animales *animal)
{

    junglaTropical.push_back(animal);
}

vector<Animales *> Zoologico::getSabana()
{
    return sabana;
}

void Zoologico::setSabana(Animales *animal)
{
    sabana.push_back(animal);
}

Zoologico::~Zoologico()
{

    cout << "La instancia de Zoologico fue eliminada" << endl;
}
