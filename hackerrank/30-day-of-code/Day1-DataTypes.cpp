#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

int i2;
double d2;
string s2;
cin >> i2 >> d2;
getchar();  //cin.ignore();  //ignores an end of line character
getline(cin, s2); //Toma toda la linea de texto


cout << i+i2 << endl <<fixed<<setprecision(1)<<d+d2 <<endl << s << s2 << endl;

return 0;
}
/*
Hi, Here are the details :

getchar();  It works almost same as cin.ignore(). It collects the extra byte (endl). Since we do not assign this extra character to any lvalue, it is just ignored, similar to cin.ignore().

fixed : fixed es utilizado para indicar que queremos una precición decimal en un valor double o flot y este se rige por std::cout.precision (1);

setprecision: setprecision eselgrado de presición que queremos en fixed
*/
