//http://codeforces.com/contest/47/problem/B
// Created on 2019/9/20. not by me

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    map<char, int> m;

    m.insert(make_pair('A', 0));
    m.insert(make_pair('B', 0));
    m.insert(make_pair('C', 0));
    string s;
    for (int i = 0; i < 3; ++i) {
        cin >> s;
        if (s[1] == '>') {
            m[s[0]]++;
        } else {
            m[s[2]]++;
        }

    }

    if (m['A'] == 1 and m['B'] == 1 and m['C'] == 1) {
        cout << "Impossible";
    } else {
        for (int i = 0; i < 3; ++i) {
            if (m['A'] == i) {
                cout << "A";
            } else if (m['B'] == i) {
                cout << "B";
            } else cout << "C";
        }
    }

    return 0;
}

