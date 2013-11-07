#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista
{
    public:
        Nodo *inicio;
        Lista();
        void agregarNodo(Nodo *nodo);
        void imprimirLista();
        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
