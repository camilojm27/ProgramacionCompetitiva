//https://codeforces.com/contest/268/problem/A
// Created by camilo on 17/3/2020.

/*
Example
Input
4
100 42
42 100
5 42
100 5

Output
5


*/

#include <iostream>

using namespace std;

int main()
{
    int stack, ans=0;
    cin >> stack; int fil1[stack], fil2[stack];
    for (int i = 0; i < stack; i++)
    {
        cin >> fil1[i];
        cin >> fil2[i];
    }

    for (int i = 0; i < stack; i++)
    {
        for (int j = 0; j < stack; j++)
        {
            if (i != j and fil1[i] == fil2[j])
            {
                ans++;
            }
            
        }
        
    }
    
    cout << ans;
    
    return 0;
}

/*

#include <iostream>
#include <set>


using namespace std;

int main()
{

int stack, ans=0, entrada;
    cin >> stack;
    set<int, less<int>>host;
    multiset<int, less<int>>guest;


    for (int i = 0; i < stack; i++)
    {
        cin >> entrada;
        host.insert(entrada);

        cin >> entrada;
        guest.insert(entrada);
    }

    for (auto &&i: host)
    {
       for (auto &&j : guest)
       {
           if (i == j)
           {
               ans++;
           }
           
           
       }
       
    }
    
    cout << ans;
    
}
*/
