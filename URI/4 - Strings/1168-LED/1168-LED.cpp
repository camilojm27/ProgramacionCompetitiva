#include <iostream>
#include <ios>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int stack;
    int totalLeds;//0  1  2  3  4  5  6  7  8  9
    int leds[10] = {6, 2, 5, 4, 4, 5, 6, 3, 7, 6};
    string entrada;
    cin >> stack;
    while (stack--)
    {   int howMany[10] = {0}, suma=0;
        cin >> entrada;
        for (int led = 0; led < 10; led++)
        {
            
            auto found = entrada.find_first_of(leds[led]);
            while (found != string::npos)
            {
                howMany[led] +=leds[led];
                found++;
            }
            

        }
        for (int i = 0; i < 10; i++)
        {
            suma += howMany[i];
        }
        
        cout << suma << " " << "leds";
        
    }

    return 0;
}