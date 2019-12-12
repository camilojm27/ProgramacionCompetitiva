//http://codeforces.com/contest/344/problem/A

#include <iostream>
using namespace std;

int main()
{
    int stack, cantidad=0;
    cin >> stack;

    int grupos[stack], aux=stack;
    while (stack--)
    {
        cin >> grupos[stack];
    }

    for (int i = 0; i < aux; i++)
    {
        if (grupos[i] != grupos[i+1])
        {
            cantidad++;
        }
        
        
    }
    
    cout << cantidad;
    
    return 0;
}