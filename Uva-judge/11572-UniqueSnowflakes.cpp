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
int sizeArbol(Nodo *arbol, int countsize);



int main(){
    Nodo *arbol = NULL;
    int stacks;
    cin >> stacks;

    for (int stack = 0; stack < stacks; ++stack)
    {
    	int machine;
    	cin >> machine;
    	for (int snowPosition = 0; snowPosition < machine; ++snowPosition)
    	{
    		int snowflake;
    		cin >> snowflake;
    		insertarNodo(arbol, snowflake);
    	}
    }

    mostrarArbol(arbol, 0);
    int snowBall = sizeArbol(arbol, 0);
    cout << snowBall<<endl;

    return 0;
}

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
        if (n == valorRaiz)
        {
        	return;
        }
        else if (n < valorRaiz)
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

int sizeArbol(Nodo *arbol, int countsize){
	if (arbol == NULL)
	{
		return countsize;
	}
	else{
	sizeArbol(arbol->der, countsize++);
	sizeArbol(arbol->izq, countsize++);
	return countsize;
	}
}
