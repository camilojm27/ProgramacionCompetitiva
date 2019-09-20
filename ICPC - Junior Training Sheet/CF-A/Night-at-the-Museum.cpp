//https://codeforces.com/contest/731/problem/A
// Created by mrsolar on 2019/9/16.

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    char pos = 'a';
    string entrada, abc = " ";
    for (char i = 'a'; i <= 'z'; ++i) {
        abc += i;
    }
    cin >> entrada;
    int result = 0;
    for (char j : entrada) {
        int a, b, temp;
        size_t found = abc.find(j);
        a = static_cast<int>(found - abc.find(pos));
        a = abs(a);
        b = abs(26 - a);

        temp = min(a, b);
        //cout <<  temp << endl;
        result += temp;
        pos = j;

    }
    cout << result;


    return 0;
}

