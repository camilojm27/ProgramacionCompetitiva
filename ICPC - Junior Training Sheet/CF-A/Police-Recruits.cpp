//https://codeforces.com/contest/427/problem/A
// Created by mrsolar on 12/15/19.

#include <iostream>

using namespace std;

int main()
{
    int stack, status=0, action, unrelated=0;
    cin >> stack;

    while (stack--)
    {
        cin >> action;
        if (action == -1 and status <= 0)
        {
            unrelated++;
        }
        else if (action == -1)
        {
            status--;
        }
        
        else
        {
            status+= action;
        }
        
        
    }
    cout << unrelated;
    
    return 0;
}


