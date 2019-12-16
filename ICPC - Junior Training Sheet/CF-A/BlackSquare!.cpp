//https://codeforces.com/contest/431/problem/A

#include <iostream>

using namespace std;

int main()
{
    
    int multiplicadores[4], suma=0, times[4] = {};
    string ammount;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> multiplicadores[i];
    }
    cin >> ammount;
    /*
    for (int i = 0; i < ammount.length(); i++)
    {
        multiplicadores[ammount[i] - 1] = ammount[i] * multiplicadores[ammount[i] - 1];
    }
    
    for (auto &&i : multiplicadores)
    {
        suma += i;
    }
    */
    for (int j = 0; j < ammount.length(); ++j) {
        times[(int) ammount[j] - 1]+= 1;
    }
    
    cout << suma;
    
    return 0;
}
