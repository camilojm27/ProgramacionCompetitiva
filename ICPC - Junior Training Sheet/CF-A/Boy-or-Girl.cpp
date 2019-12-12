//http://codeforces.com/contest/236/problem/A

#include <iostream>

using namespace std;

int main()
{
    string username;
    cin >> username;
    string aux = username;
    bool alphabet[26];

    for (bool & i : alphabet)
    {
        i = false;
    }

    int count = 0;
    for (int i = 0; i < username.length(); i++)
    {
        int position = aux[i] - 97;
        if (!alphabet[position]) //alphabet[position] == false
        {
            alphabet[position] = true;
        }
        else
        {
            count++;
        }
    }

    if ((username.length() - count) % 2)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
