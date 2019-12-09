//http://codeforces.com/contest/677/problem/A
#include <iostream>

using namespace std;

int main(){
    int stack, total = 0, height;
    cin >> stack  >> height;
    while (stack--)
    {
        int amigo;
        cin >> amigo;
        if (amigo > height)
        {
            total += 2;
        }
        else
        {
            total++;
        }
        
        
    }
    cout << total;
    
    return 0;
}