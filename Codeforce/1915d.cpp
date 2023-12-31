#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    unsigned short t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout<<s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i+1] == 'a' || s[i+1] == 'e'){
                cout<<".";
            }
            cout<<s[i];
        }
        cout << endl;
    }

    return 0;
}