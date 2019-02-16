/*Uva 591
Name: Camilo José Mezú Mina
Email: camilo272001@gmail.com
*/
#include <iostream>

using namespace std;

int main()
{

    int stacks;
    int set = 1;
    while (cin >> stacks, stacks)
    {
        int average = 0, moves = 0;
        int blockH[stacks];

        for (int eachStack = 0; eachStack < stacks; eachStack++)
        {

            cin >> blockH[eachStack];
            average = average + blockH[eachStack];
        }

        average = (average / stacks);

        for (int readRay = 0; readRay < stacks; readRay++)
        {
            if (blockH[readRay] > average)
            {

                moves = moves + (blockH[readRay] - average);
            }
        }
        cout << "Set #" << set << endl;
        set++;
        cout << "The minimum number of moves is " << moves << "." << endl
             << endl;
    }
}