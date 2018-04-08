/*Uva 11727
Sample Input
3
1000  2000  3000
3000  2500  1500
1500  1200  1800
Sample Output
Case  1:  2000
Case  2:  2500
Case  3:  1500
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int a,b,c;

cin >> n;

        for(int i=1;i<=n; i++)
        {
        cin >> a >> b >> c;

          int mayor, menor, resultado;
            if(a>b)
            {
                mayor = a;
                menor = b;


                if(mayor > c)
                {
                    resultado = c;
                    if(b>c)
                    {
                      b= resultado;
                    }
                    else{resultado = c;}
                }

                else
                {resultado = a;}
            }


            if(a<b)
            {
                menor = a;
                mayor = b;

                if(mayor > c)
                {
                    resultado = c;
                }
                else
                {resultado = b;}
            }

            cout << "case "  << i <<":"<< " " << resultado << endl;
            resultado = 0;
            mayor =0;
            menor=0;

        }
return 0;
}
