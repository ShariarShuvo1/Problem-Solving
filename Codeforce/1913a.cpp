#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int length = s.size();
        bool notFound = true;
        for (int i = s.size() - 1; i > 0; i--)
        {
            string left = s.substr(0, length - (length - i));
            string right = s.substr(i);
            if ((stoi(left) < stoi(right)) && right[0] != '0')
            {
                cout << left << " " << right << endl;
                notFound = false;
                break;
            }
        }
        if (notFound)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}