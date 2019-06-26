#include <iostream>
using namespace std;

int hanoi(int number)
{
    int a = number, b, c;
    printf("%d %d %d\n", a, b, c);
    if (number <= 1)
    {
        if (a == 0 )
        {
            b-=1;
            c+=1;
            printf("%d %d %d\n", a, b, c);
        }
        if (a != 0)
        {
            a -= 1;
            c += 1;
            printf("%d %d %d\n", a, b, c);
        }

        return 1;
    }
    else if (number >= 2)
    {
        a-=1;
        c+=1;
        printf("%d %d %d\n", a, b, c);
        return (2 * hanoi(number - 1) + 1);
    }
}

int main()
{

    int stack;
    cin >> stack;
    while (stack--)
    {
        int numberHan;
        cin >> numberHan;
        int *a;
        cout << endl
             << hanoi(numberHan) << endl;
    }

    return 0;
}