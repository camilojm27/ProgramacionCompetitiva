#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, double tip_percent, double tax_percent) {

    tip_percent = meal_cost * tip_percent;
    tip_percent = tip_percent / 100;
    tax_percent = meal_cost * tax_percent;
    tax_percent = tax_percent / 100;


    double totalCost=0;

    totalCost = meal_cost + tip_percent + tax_percent ;


    cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

/* al trabajar con porcentajes es recomendable utilizar tipos de datos bouble
y al hacer el round (redondeo) hay que redefinir la variable o hacerlo directamente
en el output*/
