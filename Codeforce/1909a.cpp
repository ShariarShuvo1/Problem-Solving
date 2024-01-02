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
        int a = 0, b = 0, c = 0, d = 0;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            if (x > 0)
            {
                if (a == 0)
                {
                    a++;
                }
            }
            if (x < 0)
            {
                if (b == 0)
                {
                    b++;
                }
            }
            if (y > 0)
            {
                if (c == 0)
                {
                    c++;
                }
            }
            if (y < 0)
            {
                if (d == 0)
                {
                    d++;
                }
            }
        }
        if (a + b + c + d == 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}