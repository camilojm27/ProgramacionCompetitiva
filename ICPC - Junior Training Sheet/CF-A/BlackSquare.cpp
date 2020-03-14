//https://codeforces.com/contest/431/problem/A

#include <iostream>
#include <set>

using namespace std;

int main()
{
    //Recoger los datos
    multiset<int, less<int>> veces;
    int entrada[4], salida = 0;
    string puntos;
    for (int i = 0; i < 4; i++)
    {
        cin >> entrada[i];
    }

    cin >> puntos;
    //Pasar los datos al multiset para tener acomodados los numeros
    for (size_t i = 0; i < puntos.length(); i++)
    {
        veces.insert(puntos[i] - 48);
    }
    //Operar para saber la cantidad
    for (auto &&i : veces)
    {
        if (i == 1)
        {
            salida += entrada[0];
        }
        else if (i == 2)
        {
            salida += entrada[1];
        }

        else if (i == 3)
        {
            salida += entrada[2];
        }
        else if (i == 4)
        {
            salida += entrada[3];
        }
    }

    cout << salida;

    return 0;
}
/*Another Way

    #include <iostream>
     
    using namespace std;
     
    int main()
    {
    string s;
    int a1, a2, a3, a4, ans;
    while (cin >> a1 >> a2 >> a3 >> a4)
    {
    ans = 0;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; ++i) 
    {
    int val = s[i] - '0';
    if (val == 1) ans += a1;
    else if (val == 2) ans += a2;
    else if (val == 3) ans += a3;
    else ans += a4;
    }
    cout << ans << endl;
    }
     
        return 0;
    }
*/
