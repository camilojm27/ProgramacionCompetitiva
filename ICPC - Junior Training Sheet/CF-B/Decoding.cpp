//http://codeforces.com/contest/746/problem/B
#include <iostream>
#include <string>
#include <math.h>
#include <cstdio>

using  namespace std;
int main() {

    //freopen("out.txt", "w", stdout);
    int lenght;
    string word,  out="";
    char character;
    cin >> lenght >> word;

    while (lenght != 0){
        if (lenght%2){//Si da 1 es impar y entra
            character = word.at(ceil(lenght/2));
            word.erase(word.begin() + ceil(lenght/2));
        }
        else{
            character =  word.at(lenght/2);
            word.erase(word.begin() + lenght/2);
        }
        out += character;

        lenght--;
    }

    for (int i = out.size() - 1; i >= 0 ; --i) {
        cout << out[i];
    }
    
    return 0;
}
