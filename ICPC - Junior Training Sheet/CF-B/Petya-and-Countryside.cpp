//http://codeforces.com/contest/66/problem/B
// Creado por MrSolar el 18 de dic del 2019.

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector<int>points;
    int stack;
    cin >> stack;
    int garden[stack];
    for (int i = 0; i < stack; i++)
    {
        cin >> garden[i];
    }

    for (int i = 0; i < stack; i++)
    {
        int puntaje = 1;

        for (int j = i; j < stack - 1; j++)
        {
            if (garden[j] >= garden[j + 1])
            {
                puntaje++;

            }
            else
            {
                break;
            }
            
            
        }
        for (int j = i; j > 0; j--)
        {
            if (garden[j] >= garden[j - 1])
            {
                puntaje++;
            }
            else
            {
                break;
            }
            
            
        }
        
        points.push_back(puntaje);
    }
    sort(points.begin(), points.end());
    cout<< points[stack - 1];
    
    
    return 0;
}