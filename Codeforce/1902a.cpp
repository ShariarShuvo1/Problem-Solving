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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero = 0, one = 0;
        bool zero_one_found = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
            if (i < s.size() - 1)
            {
                if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
                {
                    zero_one_found = true;
                    break;
                }
            }
        }
        if (zero_one_found || zero > one)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}