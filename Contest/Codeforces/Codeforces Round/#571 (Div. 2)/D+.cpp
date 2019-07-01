//Fails on 6 filter
#include <iostream>
#include <math.h>
using namespace std;
int main() {

   int stack, number=0;
   double aux;
   cin >> stack;
   int array[stack];
   bool arrayINT[stack];
   while(stack--){
       cin >> aux;
       if (aux / trunc(aux) == 1){
        arrayINT[stack] = true;
       } else{
           arrayINT[stack] = false;
       }
        aux = trunc(aux);
       array[stack] = aux;
       number += aux;
   }

   if(number != 0){
       for (int i = sizeof(array)/ sizeof(*array) - 1; i >= 0 ; --i) {
           if (! arrayINT[i]){
               array[i] += 1;
           }

       }
   }

   arrayINT[sizeof(array)/ sizeof(*array) - 1] += 1;
    arrayINT[0] -= 1;

    //cout << number;
    for (int j = sizeof(array)/ sizeof(*array) - 1; j >= 0 ; --j) {
        cout  << array[j] << endl;
    }
    return 0;
}