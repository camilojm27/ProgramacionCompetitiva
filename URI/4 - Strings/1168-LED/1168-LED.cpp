#include <iostream>
#include <ios>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int stack;
    int totalLeds;//0  1  2  3  4  5  6  7  8  9
    string leds[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string entrada;
    cin >> stack;
    while (stack--)
    {   int howMany[10] = {0}, suma=0;
        cin >> entrada;
        for (int led = 0; led < 10; led++)
        {
            
            size_t found = entrada.find(leds[led]);
            while (found != string::npos)
            {
                howMany[led] += 1 ;
                found = entrada.find(leds[led], found + 1);
            }
            

        }
        for (int i = 0; i < 10; i++)
        {
            switch (i) {
                case 0:
                    suma += howMany[i] * 6;
                    break;
                case 1:
                    suma += howMany[i] * 2;
                    break;
                case 2:
                    suma += howMany[i] * 5;
                    break;
                case 3:
                    suma += howMany[i] * 5;
                    break;
                case 4:
                    suma += howMany[i] * 4;
                    break;
                case 5:
                    suma += howMany[i] * 5;
                    break;
                case 6:
                    suma += howMany[i] * 6;
                    break;
                case 7:
                    suma += howMany[i] * 3;
                    break;
                case 8:
                    suma += howMany[i] * 7;
                    break;
                case 9:
                    suma += howMany[i] * 6;
                    break;
            }
        }
        
        cout << suma << " " << "leds" << endl;
        
    }

    return 0;
}