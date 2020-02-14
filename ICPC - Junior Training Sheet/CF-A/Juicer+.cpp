//http://codeforces.com/contest/709/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int>oranges;
    int n, b, d, aux, trash = 0, vacear = 0;
    bool once = false;
    cin >> n >> b >> d;
    for (int  i = 0; i < n; i++)
    {
        cin >> aux;
        oranges.push_back(aux);
    }

    for (auto v : oranges )
    {
        if (v > b)
        {
            trash++;
        }
        else
        {
            once = true;
        }
        
        if (trash > d)
        {
            vacear++;
        }
        
        
        
    }
    if (trash != n )
    {
        vacear++;
    }

    if ( once and trash != 0)
    {
        vacear--;
    }
    
    
    cout << vacear;
    
    return 0;
}
