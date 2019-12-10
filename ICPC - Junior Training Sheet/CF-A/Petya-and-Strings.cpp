//http://codeforces.com/contest/112/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    string f, s;
    cin >> f >> s;

    transform(f.begin(), f.end(), f.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < f.length(); i++) {
        if (f[i] > s[i]) {
            cout << 1;
            break;
        }
        if (f[i] < s[i]) {
            cout << -1;
            break;
        }
        if (i == f.length() - 1) {
            cout << 0;
        }

    }


    return 0;
}