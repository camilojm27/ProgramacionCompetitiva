#include <iostream>
#include <string>
using namespace std;


int main() { 
    
    int cantidadPalabras;
    string  letras;
    //cout << "Ingrese la cantidad de palabras"<<endl;
    cin >> cantidadPalabras;

    for(int contador = 0; contador < cantidadPalabras; contador++){
        //cout << letras.length() << endl;
       // cout <<endl<< "Ingrese la palabra #" << contador <<endl;
        cin >> letras;
        string pares ="", impares="";

        for(int posicionLetra=0; posicionLetra < letras.length(); posicionLetra++){
            
            if((posicionLetra % 2)  == 0 )
            {
                //cout << "Pares " << posicionLetra << endl;
                //cout << "Pares- Letras posicion" << letras[posicionLetra] << endl;
                pares += letras.at(posicionLetra);
                //THIS IS THE CORRECT ONE  cout <<"pares"<<pares<<endl;
            }
            
            if((posicionLetra % 2)  == 1 )
            {
                impares += letras.at(posicionLetra);
                //THIS IS THE CORRECT ONE  cout <<"impares"<<impares<<endl;
            }
     
        }
        cout << pares<< " "<< impares<<endl;
       
    }
    return 0;
}