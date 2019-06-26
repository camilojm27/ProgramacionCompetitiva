#include <iostream>
#include <vector>
#include<string>


using namespace std;


struct Contactos{

    vector<string>numeros;
    vector<string>correos;

    string nombre;
    Contactos *derecha;
    Contactos *izquierda;

    Contactos(string nombreU = "", string numero = "", string correo = ""){
        nombre = nombreU;
        numeros.push_back(numero);
        correos.push_back(correo);
        derecha = NULL;
        izquierda = NULL;
    }
    Contactos( string numero = "", string correo = ""){
        numeros.push_back(numero);
        correos.push_back(correo);
    }
};

void insertContacto(Contactos *&libreta, string newNombre, string newNumero, string newCorreo){
if (libreta == NULL){
    libreta = new Contactos(newNombre, newNumero, newCorreo);
    return;
}
else if(newNombre == libreta->nombre){
    libreta->numeros.push_back(newNumero);
    libreta->correos.push_back(newCorreo);
    return;
}
else if(newNombre < libreta->nombre){
    insertContacto(libreta->izquierda, newNombre, newNumero, newCorreo);
}
else{
    insertContacto(libreta->derecha, newNombre, newNumero, newCorreo);
}
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
