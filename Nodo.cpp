#include "Nodo.h"
#include <iostream>

Nodo::Nodo(int numero)
{
    this->numero=numero;
    this->siguiente=NULL;
    //ctor
}

Nodo::~Nodo()
{
    //dtor
}
