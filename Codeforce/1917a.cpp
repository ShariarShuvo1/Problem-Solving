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
        bool zero_flag = false;
        int negetive_count = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                zero_flag = true;
            }
            else if (x < 0)
            {
                negetive_count++;
            }
        }
        if (zero_flag || negetive_count % 2 == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
    }

    return 0;
}