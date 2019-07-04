//Uncomplete
#include <iostream>
using namespace std;
int main() {

    string a, b;
    int diference;
    cin >> a >>b;

    if(a.length() == b.length()){
        cout << "1";
    }
    else{
        diference = a.length() - b.length() + 1;
        if(diference%2 != 0){
            cout << diference;
        }
        else{
            cout << diference -1;
        }
    }
    return 0;
}