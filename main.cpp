#include <iostream>
#include <vector>
#include "Lista.h"
#include "Nodo.h"
using namespace std;


int fibonacci(int n)
{
     //CASO BASE
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    //LLAMADA RECURSIVA
    int suma=fibonacci(n-1)+fibonacci(n-2);

    return suma;
}


/*void func()  //Esta función recursiva es infinita, tomará todo el espacio de memoria
{
    func();
}*/




int main()
{
  Lista lista;

  lista.agregarNodo(new Nodo(33));
  lista.agregarNodo(new Nodo(22));

  lista.imprimirLista();

for(int i=0;i<10;i++)
  cout<<fibonacci(i)<<endl;

cout<<endl;
cout<<endl;

  Nodo* nodo1=new Nodo(10);
  Nodo *nodo2=new Nodo(5);
  Nodo *nodo3=new Nodo(20);

nodo1->siguiente=nodo2;
nodo2->siguiente=nodo3;

for(Nodo *temp=nodo1;temp!=NULL;temp=temp->siguiente)
    cout<<temp->numero<<endl;

cout<<endl;
cout<<endl;


Nodo *temp=nodo1;

while(temp!=NULL)
{
    cout<<temp->numero<<endl;
    temp=temp->siguiente;
}


  return 0;
}
