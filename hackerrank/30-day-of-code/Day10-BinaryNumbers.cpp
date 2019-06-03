#include <vector>
#include <math.h>
#include <iostream>
#include <limits>

using namespace std;

int BinConsecutive(int n)
{

    int result = 0;
    int auxResult = 0;
    vector<int> residuos;
    //vector<int> cociente; no es necesario este array

    for (int contador = 0; n > 0; contador++)
    {

        residuos.push_back(trunc(n % 2));
       // cociente.push_back(trunc(n / 2));
        n = int(n / 2);
    }

    for (auto posicion = residuos.rbegin(); posicion != residuos.rend(); posicion++)
    {
        if (*posicion == 1)
        {
            result += 1;
            if (result > auxResult)
            {
                auxResult = result;
            }
        }
        else
        {
            result = 0;
        }
    }

    return auxResult;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = BinConsecutive(n);
    printf("%d\n", result);

    return 0;
}