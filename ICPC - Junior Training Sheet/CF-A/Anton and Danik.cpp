//https://codeforces.com/contest/734/problem/A
// Created by camilo on 2019/9/16.

#include <bits/stdc++.h>
using  namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int size, a=0, d=0;
    cin >> size;
    string s;
    cin >> s;

    size_t t = s.find('D');
    while (t != string::npos){
        d++;

        t= s.find('D', t + 1);
    }
    t = s.find('A');
    while (t != string::npos){
        a++;
        t = s.find('A', t + 1);
    }

    if (a > d){
        cout << "Anton";
    } else if (d > a){
        cout << "Danik";
    } else{
        cout << "Friendship";
    }

    return 0;
}
