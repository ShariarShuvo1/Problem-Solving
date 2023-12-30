#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    unsigned short t;
    cin >> t;
    while (t--)
    {
        string row1, row2, row3;
        cin >> row1 >> row2 >> row3;
        string row = row1+row2+row3;
        map<char, int> myMap;
        for (auto c: row){
            myMap[c] +=1;
        }
        for(auto it: myMap){
            if(it.second == 2){
                cout<<it.first<<endl;
                break;
            }
        }

    }
    return 0;
}