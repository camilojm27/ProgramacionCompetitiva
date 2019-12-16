//https://codeforces.com/contest/266/problem/A
// Created by mrsolar on 12/15/19.
#include <iostream>
using namespace std;

int main(){
    int n, answer=0;
    cin>> n;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if(str[i] == str[i+1]){
            answer++;
        }
    }
cout << answer;
    return 0;
}

