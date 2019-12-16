//https://www.geeksforgeeks.org/program-print-substrings-given-string/
#include <iostream> 
using namespace std; 
  
// Function to print all sub strings 
void subString(char str[], int n)  
{ 
    for (int inicio = 1; inicio <= n; ++inicio) {

        for (int final = 0; final <= n - inicio; ++final) {

            /*Imprimir los caracteres desde
             * el inicio hasta el fina*/

            int k = inicio + final - 1;
            for (int l = final; l <= k; ++l)
                cout << str[l];
            cout << endl;
        }

    }
} 
  
int main()  
{ 
    char str[] = "MrSolar"; 
    subString(str, strlen(str)); 
    return 0; 
} 
