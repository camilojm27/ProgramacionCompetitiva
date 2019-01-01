#include <string>
#include <iostream>

using namespace std;
void printRay(int tamanoArray, int array[])
{
   for (int contador = 0; contador < tamanoArray; contador++)
   {
      cout << array[contador]<< " ";
   }
}

int main() {

   int sizeRay;
   cin >> sizeRay;
   int numberRay[sizeRay], temporalRay[sizeRay], contRay= sizeRay;
   //cin.ignore(numeric_limits<streamsize>::max());


   for(int contador = 0; contador < sizeRay; contador++)
   {
      cin >> numberRay[contador];
      
      while(contRay >= 0){
         temporalRay[contRay-1] = numberRay[contador];
         contRay --;
         break;
      }
      
   }
   //printRay(sizeRay, numberRay);
   printRay(sizeRay, temporalRay);

   return 0;
}