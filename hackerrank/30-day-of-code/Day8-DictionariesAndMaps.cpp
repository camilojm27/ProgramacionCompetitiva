//https://stackoverflow.com/questions/14070940/c-printing-out-map-values
#include <iostream>
#include <map>
using namespace std;


int main() {

    int sizeQuery;
    cin >> sizeQuery;
    map<string, int>mapPerson;
    map<string, int>::iterator itr;

    for(int query = 0; query < sizeQuery; query++)
    {
        string person;
        int personValue;
        cin >> person>>personValue;
        mapPerson.insert(make_pair(person, personValue));
    }
    
    string person;
    /*Se utiliza el bucle while para que al momento de realizar una consulta se puedan hacer
    infinitas veces hasta que se acabe el archivo == EOF (End Of File) */
    while (cin >> person){
        
        itr = mapPerson.find(person);
        
        if (itr == mapPerson.end()) {
            cout << "Not found"<<endl;
        }
        
        else
        {
            cout << person << "=" << mapPerson.at(person)<<endl;
        }
        
    }
    
    return 0;
}

/*
    Tambien pude ser usado 
while (count < n) {
    let person: String? = readLine()
    if (person != nil) {
        //... your code
    } else { // readLine() get nil - stop loop
        break
    }
}*/