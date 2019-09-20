//https://codeforces.com/contest/231/problem/A
// Created by camilo on 2019/9/16.
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int number, total = 0;
    cin >> number;
    int problems[number];
    for (int i = 0; i < number; ++i) {
        int pcount = 0;
        for (int j = 0; j < 3; ++j) {
            cin >> problems[j];
            if (problems[j] == 1) {
                pcount++;
            }
        }
        if (pcount >= 2) {
            total++;
        }


    }
    cout << total;
}
