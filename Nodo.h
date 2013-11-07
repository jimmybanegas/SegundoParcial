#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        int numero;
        Nodo* siguiente;
        Nodo(int numero);
        Nodo();
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
