#include <iostream>

using namespace std;

struct ArbolNodo{
    int item;
    ArbolNodo *derecha;
    ArbolNodo *izquierda;
    ArbolNodo(int n){
        //Constructor por convenincia, tambien se puede crear una funcion aparte
        item = n;
        izquierda = NULL;
        derecha = NULL;

    }
};

void insertarNodo(ArbolNodo *&raiz, int nuevoItem){
    if (raiz == NULL){
        raiz = new ArbolNodo(nuevoItem);
    }
    else if (nuevoItem < raiz->item){
        insertarNodo(raiz->izquierda, nuevoItem);

    }
    else{
        insertarNodo(raiz->derecha, nuevoItem);
    }
}

bool busqueda(ArbolNodo *raiz, int valorABuscar){
    if (raiz == NULL){
        return false;
    }
    else if(raiz->item == valorABuscar){
        return true;
    }
    else if(raiz->item < valorABuscar){
        return busqueda(raiz->derecha, valorABuscar);
    }
    else{
        return busqueda(raiz->izquierda, valorABuscar);
    }
    
}

bool hasChilds(ArbolNodo *raiz, int nodoABuscar){
    if(raiz == NULL){
        return false;
    }


    else if (raiz->item == nodoABuscar)
    {
        if (raiz->izquierda != NULL && raiz->derecha != NULL)
        {
            return false;
        }
        else{
            return true;
        }
    }
    else if (raiz->item < nodoABuscar)
    {
        return hasChilds(raiz->derecha, nodoABuscar);
    }
    else{
        return hasChilds(raiz->izquierda, nodoABuscar);
    }
}


int main() {

    return 0;
}