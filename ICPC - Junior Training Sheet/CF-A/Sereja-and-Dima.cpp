//http://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int stack, sereja=0, dima=0, fichaSec = 0;
    cin >> stack;
    vector<int> game;
    int ficha;

for (int i = 0; i < stack; i++)
{
    cin >> ficha;
    game.push_back(ficha);
}

    for (int i = 0; i < stack; i++)
    {
        if (game[0] > game[game.size() - 1])
        {
            fichaSec = game[0];
            game.erase(game.begin());
        }
        else
        {
            fichaSec = game[game.size() - 1];
            game.pop_back();
        }
        if (i % 2)
        {
            dima += fichaSec;
        }
        else
        {
            sereja += fichaSec;
        }
        
        
        
    }
    
    cout << sereja << " " << dima <<endl;

    return 0;
}
