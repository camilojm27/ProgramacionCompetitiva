//  https://codeforces.com/contest/1187
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int longString, numFriends;
	string shopString, name;
	cin >> longString >> shopString >> numFriends;

	while(numFriends--){
		cin >> name;
		int mayor=0;

		for (int i = 0; i < name.length(); i++)
		{
			int position;
            vector<string> existe;
            bool existo;
			auto j = shopString.find(name[i]);
			if (j != string::npos)
			{
                for (auto it = existe.begin(); it != existe.end(); it++) {
                    if(name[i]){
                        existo = true;
                    }
                }


				if (position > mayor)
				{
					mayor = position;
				}
			}
			
		}
			

	}
}
