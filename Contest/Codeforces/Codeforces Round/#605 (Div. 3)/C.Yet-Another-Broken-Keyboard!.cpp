//https://codeforces.com/contest/1272/problem/C
#include <iostream>

using namespace std;

// Function to print all sub strings


// Driver program to test above function
int main() {

    int n, availableSize, answer = 0;
    cin >> n >> availableSize;
    char str[n], available[availableSize];
    cin >> str;
    for (int j = 0; j < availableSize; ++j) {
        cin >> available[j];
    }
    string constructor;
    for (int inicio = 1; inicio <= n; ++inicio) {

        for (int final = 0; final <= n - inicio; ++final) {

            /*Imprimir los caracteres desde
             * el inicio hasta el fina*/

            int k = inicio + final - 1;
            for (int l = final; l <= k; ++l)
                constructor += str[l];
            for (int i = 0; i < availableSize; ++i) {
                if (constructor.find(available[i]) != string::npos) {
                    answer++;
                    break;
                }
            }
        }

    }
    cout << answer << endl;

    return 0;
}
