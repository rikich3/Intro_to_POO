#pragma once
#include "Humano.hpp"
#include <iostream>
using namespace std; //nombres de espacio importacia: Es que cuando el codigo empieze a tener
//más de 2000 lineas entonces sera necesario que dividamos todos los identificadores en grupos
//a los cuales llamaremos namespaces, podremos referirnos a loss contenidos del namespace usando
// los dobles 2 puntos "::"

void Humano::decirEdad(){ //En este caso usamos "::" para referirnos al miembro decirEdad() de la
                            // clase Humano
    cout<< "mi edad es " << edad;
}