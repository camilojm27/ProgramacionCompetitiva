//http://codeforces.com/contest/102/problem/B
// Created by camilo on 2019/9/19.

#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    if (s.size() == 1) {
        cout << 0;
    } else {
        long long magical, contador = 0;
        do {
            magical = 0;
            for (int i : s) {
                magical += i - 48;
            }
            //cout << magical << "\n";
            s = to_string(magical);
            contador++;
        } while (magical >= 10);
        cout << contador;
    }
    return 0;
}

