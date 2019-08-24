//http://codeforces.com/contest/66/problem/B
//2.30 +
//6.37
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int gardenSize;
    cin >> gardenSize;
    int alturas[gardenSize], puntajes[gardenSize];
    for (int i = 0; i < gardenSize; ++i) {
        cin >> alturas[i];
        puntajes[i] = 0;
    }
if (gardenSize ==1){
    cout << 1;
} else{
    for (int i = 0; i < gardenSize; ++i) {
        int a=0, b=0, next=0;

        next=i+1;
        if (alturas[i] >= alturas[next]) {
            a = alturas[i], b=alturas[next];
            while (a >= b){
               // cout << "entro en i =" << i<<endl;
                puntajes[i]+=1;
                a=alturas[next];
                next++;
                b=alturas[next];
            }
        }
    }
    for (int j = 0; j < gardenSize; ++j) {
        //cout << puntajes[j];
    }
   // cout << endl;

    for (int k = gardenSize - 1; k >= 0 ; --k) {
        int a, b, next;

        next=k-1;
        if (alturas[k] >= alturas[next]) {
            a = alturas[k], b=alturas[next];
            while (a >= b){
                //cout << "entro en k =" << k <<endl;
                puntajes[k]+=1;
                a=alturas[next];
                next--;
                b=alturas[next];
            }
        }
    }

    /*
    cout << "n = " << n <<endl;
    for (int j = 0; j < gardenSize; ++j) {
        cout << puntajes[j];
    }*/
    sort(puntajes, puntajes+gardenSize, greater<int>());

    cout << puntajes[0] + 1;
}

    return 0;
}
/*
 8
1 2 1 1 1 3 3 4
*/