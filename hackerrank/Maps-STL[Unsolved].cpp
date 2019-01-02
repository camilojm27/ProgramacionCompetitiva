//https://stackoverflow.com/questions/14070940/c-printing-out-map-values
#include <iostream>
#include <map>
#include <set>
using namespace std;
void printMap(map <string, int> estudiantes){
    
    for(auto elem : estudiantes )
    {
        cout << "{" << elem.first <<", "<<elem.second <<"}"<<endl;
    }
    
}
void printMapCase3(map <string, int> estudiantes){
    for(auto elem : estudiantes )
    {
        cout << endl<<"---------------------------------------"<<endl;
        cout << elem.second <<endl;
    }
}
int main()
{
    
    int sizeCases;
    cin >> sizeCases;
    map<string, int> estudiantes;
    for(int query = 0; query < sizeCases; query++)
    {
        int typeCase, studentValue;
        cin >> typeCase;
        
        string student;
        cin >> student ;

        if(typeCase == 1){
            cin>> studentValue;
            for(auto elem : estudiantes){
                if (elem.first == student){
                    estudiantes.insert(make_pair(student,studentValue+elem.first));
                }

            }
            
            estudiantes.insert(make_pair(student,studentValue));

        }
        
        if (typeCase == 2) {
            
            for(auto elem : estudiantes)
            {
                if (elem.first == student){
                    elem.second= 0;
                }
            }
            
            //estudiantes.erase(student);
        }

        if(typeCase == 3){
            printMapCase3(estudiantes);
        }
        
        
    }
    //printMap(estudiantes);
    
    return 0;
}
