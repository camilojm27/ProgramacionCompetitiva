#include <bits/stdc++.h>

using namespace std;




int main()
{
    int n, suma=0;
    cin >> n;
    int arreglo[n];


    for(int i=1; i<=n; i++)
    {

        cin >> arreglo[i];
        suma += arreglo[i] ;

    }
    cout << suma ;
}
