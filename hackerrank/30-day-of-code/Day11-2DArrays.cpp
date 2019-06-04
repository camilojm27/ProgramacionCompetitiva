#include <vector>
#include <limits>
#include <iostream>
#include <algorithm>

using namespace std;

int hourglase()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int posValor = 0;
    std::vector<int> total(16);
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            total[posValor] = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                    + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1]
                    + arr[i+2][j+2];
                    posValor++;
        }
    }

    sort(total.begin(), total.end());
    /*for (auto i = total.begin(); i!= total.end(); i++)
    {
        cout << *i << " ";
    }*/

    return total.at(15);
}

int main()
{

    int result = hourglase();
    cout <<result << endl;

    /*
    Print the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << endl;
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j]<< " ";
        }
    }
*/
    return 0;
}
