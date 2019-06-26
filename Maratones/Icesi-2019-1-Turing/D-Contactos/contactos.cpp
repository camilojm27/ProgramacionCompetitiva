#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contactos {

    vector<string> numeros;
    vector<string> correos;

    string nombre;
    Contactos *derecha;
    Contactos *izquierda;

    Contactos(string nombreU = "", string numero = "", string correo = "") {
        nombre = nombreU;
        numeros.push_back(numero);
        correos.push_back(correo);
        derecha = NULL;
        izquierda = NULL;
    }

};

void insertContacto(Contactos *&libreta, string newNombre, string newNumero, string newCorreo) {
    if (libreta == NULL) {
        libreta = new Contactos(newNombre, newNumero, newCorreo);
        return;
    } else if (newNombre == libreta->nombre) {
        libreta->numeros.push_back(newNumero);
        libreta->correos.push_back(newCorreo);
        return;
    } else if (newNombre < libreta->nombre) {
        insertContacto(libreta->izquierda, newNombre, newNumero, newCorreo);
    } else {
        insertContacto(libreta->derecha, newNombre, newNumero, newCorreo);
    }
}

void printInfo(Contactos *libreta) {
    if (libreta != NULL) {
        printInfo(libreta->izquierda);
        cout << libreta->nombre << "\nTelefono:\n";

        for (auto it = libreta->numeros.begin(); it != libreta->numeros.end(); it++) {
            if(*it != ""){
                cout << *it << "\n";
            }
        }


        cout << "E-Mail:\n";

        for (auto it = libreta->correos.begin(); it != libreta->correos.end(); it++) {
            if(*it != ""){
                cout << *it << "\n";
            }

        }

        cout << "###\n";
        printInfo(libreta->derecha);
    }

}

int main() {
    int done;
    int stack;
    string nombre, apellido, dato, vacio = "";
    cin >> done;
    do {
        Contactos *libreta;
        libreta = NULL;
        while (done--) {
            cin >> nombre >> apellido >> dato;
            nombre += " " + apellido;
            if (dato.find('@') != std::string::npos) {
                insertContacto(libreta, nombre, vacio, dato);
            } else {
                insertContacto(libreta, nombre, dato, vacio);
            }

        }
        printInfo(libreta);

        cin >> done;

    } while (done > 0);


    return 0;
}
