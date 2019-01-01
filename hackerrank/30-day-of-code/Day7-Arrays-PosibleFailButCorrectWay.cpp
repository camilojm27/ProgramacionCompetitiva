#include <string>
#include <limits>
#include <vector>
#include <functional>
#include <iostream>

using namespace std;

void split(const string& s, char c,
           vector<string>& v) {
   string::size_type i = 0;
   string::size_type j = s.find(c);

   while (j != string::npos) {
      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}
void iString(vector<string> number){

for(int contador = 0; contador < number.size(); contador++)
{
   cout << number[contador];
}

}
void getString(){
   int sizerray;
   vector<string> finalNumberRay;
   string iString;
   cin >> sizerray;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   getline(cin, iString);
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   
   split(iString, ' ', finalNumberRay);   
   iString(finalNumberRay)();

}

int main() {
   
   getString();
}