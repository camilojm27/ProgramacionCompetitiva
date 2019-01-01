#include <iostream>
#include <limits>
#include<string>

using namespace std;

int main()
{
    string nombre, comidaFavorita;
    int edad;

    cout << "Ingrese el nombre"<<endl;
    getline(cin,  nombre); //Toma toda la linea y toda la informacion que se le ingrese incluyendo numeros
    
    cout << "Ingrese su edad"<<endl;
    cin >> edad;
    cin.ignore(5, '#'); //Voy a ignorar 5 o hasta que encuentre un salto de linea
    //cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Voy a ignorar todo hasta que haya un salto de linea. 
                                                        //Se debe agregar la libreria limits

    cout << "Ingrese su comida favorita"<<endl;
    getline(cin,  comidaFavorita);


    cout << "Hola "<<nombre << " Tienes "<< edad << " años y tu comida favorita es "<< comidaFavorita<<endl;


    


    return 0;
}
