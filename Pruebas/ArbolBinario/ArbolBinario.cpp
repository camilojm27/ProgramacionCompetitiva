#include "ArbolBinario.h"


Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
        {
            insertarNodo(arbol->izq, n);
        }
        else
        {
            insertarNodo(arbol->der, n);
        }
    }
}

void mostrarArbol(Nodo *arbol, int contador){
	if (arbol == NULL)
	{
		return;
	}
	else{
		mostrarArbol(arbol->der, contador+1);
		for (int i = 0; i < contador; ++i)
		{
			cout << "   ";
		}
		cout<<arbol->dato <<endl;
		mostrarArbol(arbol->izq, contador+1);
	}
}

bool busqueda(Nodo *arbol, int n){
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->dato == n)
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        return busqueda(arbol->izq, n);
    }
    else{
        return busqueda(arbol->der, n);
    }
}