//http://codeforces.com/contest/66/problem/B
//2.30 +
//6.37
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int gardenSize;
    cin >> gardenSize;
    int gardeHeights[gardenSize], gardenMax[gardenSize];

    for (int i = 0; i < gardenSize; i++)
    {
        cin >> gardeHeights[i];
        gardenMax[i] = 0;
    }

    for (int i = 0; i < gardenSize; i++)
    {
        int maximo = 0;
        if (i <= gardenSize - 1)
        {

            int next = gardeHeights[i + 1];
            if (gardeHeights[i] >= gardeHeights[i + 1])
            {
                int localI = i;
                while (gardeHeights[i] >= gardeHeights[i + 1] and i + 1 < gardenSize)
                {
                    gardenMax[i]++;
                    localI++;
                }
                while (i-1 >= 0 and gardeHeights[i] >= gardeHeights[i-1])
                {
                    gardenMax[i]++;
                }
                
            }
            
        }
        
        
        sort(gardenMax, gardenMax+1);
    }
    for (size_t i = 0; i < gardenSize; i++)
    {
        cout << gardenMax[i];
    }
    
    return 0;
}
