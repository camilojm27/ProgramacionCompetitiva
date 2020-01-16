//https://codeforces.com/contest/686/problem/A

#include <iostream>

using namespace std;

int main()
{
    int n, distressed=0;
    long long int number, x;
    char sig;
    cin >> n >> x;
    while (n--)
    {
        cin >> sig >> number;
        if (sig == '+')
        {
            x += number;
        }
        else
        {
            x -= number;
            if (x < 0)
            {
                distressed ++;
                x+= number;
            }
            
        }
        
    }

    cout << x << " " << distressed;
    
    return 0;
}
