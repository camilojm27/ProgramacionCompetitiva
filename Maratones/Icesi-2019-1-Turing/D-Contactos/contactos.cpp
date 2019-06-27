#include <iostream>
#include <vector>
#include <string>
#include <ios>
#include <algorithm>

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
        cout << endl << libreta->nombre << "\nTelefono:\n";

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

        cout << "###";
        printInfo(libreta->derecha);
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    int done,contadorLibreta=1;
    string nombre, apellido, dato, vacio = "";
    cin >> done;
    while (done != 0) {

        Contactos *libreta;
        libreta = NULL;
        while (done--) {
            cin >> nombre >> apellido >> dato;
            nombre += " " + apellido;
            if (dato.find('@') != std::string::npos) {
                insertContacto(libreta, nombre, vacio, dato);
            } else {
                dato.insert(0,"(");
                dato.insert(4, ")");
                dato.insert(5, " ");
                dato.insert(9, "-");

                insertContacto(libreta, nombre, dato, vacio);
            }

        }
        sort(libreta->numeros.begin(), libreta->numeros.end());
        sort(libreta->correos.begin(), libreta->correos.end());

        cin >> done;
        if (contadorLibreta > 1 and done != 0){cout << endl;}
        cout << "Lista de contactos #"<<contadorLibreta<<":";
        printInfo(libreta);
        contadorLibreta++;
        if(done != 0){
            cout << endl;
        }

    }


    return 0;
}
