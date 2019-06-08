//https://stackoverflow.com/questions/14070940/c-printing-out-map-values
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> students;
    map<string, int>::iterator it;
    int query;
    cin >> query;
    while (query--)
    {
        int typeOfQuery;
        cin >> typeOfQuery;
        if (typeOfQuery == 1)
        {
            string studentName;
            int studentValue;
            cin >> studentName >> studentValue;

            it = students.find(studentName);
            if (it != students.end())
            {
                studentValue += it->second;
                students.erase(it);
            }

            students.insert(make_pair(studentName, studentValue));
        }
        else if (typeOfQuery == 2)
        {
            string delStudent;
            cin >> delStudent;
            it = students.find(delStudent);

            if (it != students.end())
            {
                students.erase(it);
            }
        }
        else if (typeOfQuery == 3)
        {
            string findme;
            cin >> findme;
            it = students.find(findme);
            if (it != students.end())
            {
                cout << it->second <<endl;
            }
            else
            {
                cout << "0" <<endl;
            }
            
        }

        /* for (auto elem : students)
        {
            std::cout << elem.second << " " << elem.first << "\n";
        }*/
    }
    return 0;
}
