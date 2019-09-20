//https://codeforces.com/contest/791/problem/A
// Created by camilo on 2019/9/16.
#include <iostream>

using namespace std;

int main() {
    int a, b, result = 0;
    cin >> a >> b;
    while (b >= a) {
        a *= 3, b *= 2;
        result++;
    }
    cout << result;

    return 0;
}

