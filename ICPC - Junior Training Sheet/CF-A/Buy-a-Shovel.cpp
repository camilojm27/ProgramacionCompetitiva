//https://codeforces.com/contest/732/problem/A
// Creado por MrSolar el 17 de dic del 2019.

#include <iostream>

using namespace std;

int main()
{
    int k, r;
    cin >>k >> r;
    bool done = true;
    for (int i = 1; done; i++)
    {
        int a= k*i, b= (k*i) - r;
        if ((a%2 == 0 and a%5 == 0) or (b%2 == 0 and b%5 ==0))
        {
            cout << i << endl;
            done = false;
            break;
        }
        
        
    }
    

    return 0;
}
