//http://codeforces.com/contest/339/problem/A

#include <iostream>
#include <set>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    string s;
    multiset<char>answer;

    cin >> s;

    for (int  i = 0; i < s.length(); i++)
    {
        if (i%2 == 0 or i==0)
        {
            answer.insert(s[i]);
        }
        i++;
        
    }
    string print;
    for (auto &&i : answer)
    {
        print += i;
        print += '+';
    }
    print.pop_back();
    cout << print;
    
    

    return 0;
}
