//https://codeforces.com/contest/228/problem/A
// Creado por MrSolar el 17 de dic del 2019.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{ 
    vector<int>horsehoes;
    unsigned answer=0, n;
    
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        horsehoes.push_back(n);
    }
    sort(horsehoes.begin(), horsehoes.end());

    for (int i = 0; i < 4; i++)
    {
        if (horsehoes[i] == horsehoes[i+1])
        {
            answer++;
        }
        
    }
    
    cout << answer;
    /*
    Another solution

 
    set<int> s;
 
    for (int i = 0; i <= 3; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
 
    cout << 4 - s.size() << endl;

    */

    return 0;
}
