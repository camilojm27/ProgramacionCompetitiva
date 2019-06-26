#include <iostream>

using namespace std;

struct ArbolNodo
{
    int item;
    ArbolNodo *derecha;
    ArbolNodo *izquierda;
    ArbolNodo *padre;
    ArbolNodo(int n, ArbolNodo *padre)
    {
        //Constructor por convenincia, tambien se puede crear una funcion aparte
        item = n;
        izquierda = NULL;
        derecha = NULL;
        padre = padre;
    }
};

void insertarNodo(ArbolNodo *&raiz, int nuevoItem, ArbolNodo *padre)
{
    if (raiz == NULL)
    {
        raiz = new ArbolNodo(nuevoItem, padre);
    }
    else if (nuevoItem < raiz->item)
    {
        insertarNodo(raiz->izquierda, nuevoItem, raiz);
    }
    else
    {
        insertarNodo(raiz->derecha, nuevoItem, raiz);
    }
}

bool busqueda(ArbolNodo *raiz, int valorABuscar)
{
    if (raiz == NULL)
    {
        return false;
    }
    else if (raiz->item == valorABuscar)
    {
        return true;
    }
    else if (raiz->item < valorABuscar)
    {
        return busqueda(raiz->derecha, valorABuscar);
    }
    else
    {
        return busqueda(raiz->izquierda, valorABuscar);
    }
}

bool hasChilds(ArbolNodo *raiz, int nodoABuscar)
{
    if (raiz == NULL)
    {
        return false;
    }

    else if (raiz->item == nodoABuscar)
    {
        if (raiz->izquierda != NULL && raiz->derecha != NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else if (raiz->item < nodoABuscar)
    {
        return hasChilds(raiz->derecha, nodoABuscar);
    }
    else
    {
        return hasChilds(raiz->izquierda, nodoABuscar);
    }
}

void eliminar(ArbolNodo *raiz, int eliminame)
{
    if (raiz == NULL)
    {
        return;
    }
    else if (eliminame < raiz->item)
    {
        eliminar(raiz->izquierda, eliminame);
    }
    else if (eliminame > raiz->item)
    {
        eliminar(raiz->derecha, eliminame);
    }
    else
    {
        eliminarNodo(raiz);
    }
}

void eliminarNodo(ArbolNodo *nodoEliminar){
    
}

int main()
{

    return 0;
}