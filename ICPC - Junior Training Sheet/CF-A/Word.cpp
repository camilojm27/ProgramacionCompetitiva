//http://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int lowerC =0, upperC = 0;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] - 97 < 0)
        {
            upperC++;
        }
        else
        {
            lowerC++;
        }
                
    }

    if (lowerC >= upperC)
    {
        transform(input.begin(), input.end(), input.begin(), ::tolower);
    }
    else
    {
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    }
    
    cout << input;
    
    return 0;
}
