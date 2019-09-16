//http://codeforces.com/contest/405/problem/A
// Created by camilo on 2019/9/14.

#include <iostream>
#include <algorithm>
#include <ios>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int colSize;
    cin >> colSize;
    int cols[colSize];
    for (int i = 0; i < colSize; ++i) {
        cin >> cols[i];
    }

    sort(cols, cols+colSize);

    for (int i = 0; i < colSize; ++i) {
        cout <<  cols[i] << " ";
    }

    return 0;
}

