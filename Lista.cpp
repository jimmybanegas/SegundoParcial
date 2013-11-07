#include "Lista.h"


Lista::Lista()
{
    inicio=NULL;//ctor
}

Lista::~Lista()
{
   for(Nodo *temp=inicio;
    temp!=NULL;)
    {
         Nodo *temp2=temp;
         temp=temp->siguiente;
         delete temp2;
    }
    //dtor
}

void Lista::agregarNodo(Nodo *nodo)
{
    if(inicio==NULL)
    {
        inicio=nodo;
    }
    else
    {
        Nodo *temp=inicio;
        while(temp->siguiente!=NULL)
        {
            temp=temp->siguiente;
        }
        temp->siguiente=nodo;

    }
}


void Lista::imprimirLista()
{
    for(Nodo *temp=inicio;temp!=NULL;temp=temp->siguiente)
    {
         cout<<temp->numero<<endl;
    }

}
