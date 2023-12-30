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
        unsigned short a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a == b)
        {
            cout << c << endl;
        }
        else if (b == c)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    return 0;
}