//http://codeforces.com/contest/709/problem/A

#include <iostream>

using namespace std;

int main()
{

    int n, b, d, garbageCounter = 0,juiSize= 0;
    cin >> n >> b >> d;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= b)
        
        {
            juiSize+=a;
            if (juiSize > d)
            {
                garbageCounter++;
                juiSize=0;
            }
            
        }

    }
   

    cout << garbageCounter;

    return 0;
}