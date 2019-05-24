#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};

Nodo *crearNodo(int);
void insertarNodo(Nodo *&arbol, int n);
void mostrarArbol(Nodo *, int contador);
bool busqueda(Nodo *arbol, int n);


// Nodo *arbol = NULL; Con esta linea crea un nuevo arbol(Nodo)