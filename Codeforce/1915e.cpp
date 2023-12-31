#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<long long int, bool> myMap;
        myMap[0] = 1;
        long long int s = 0;
        bool flag = 0;
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            if (i % 2 == 0)
            {
                s += temp;
            }
            else
            {
                s -= temp;
            }
            if (myMap[s])
            {
                flag = 1;
            }
            myMap[s] = 1;
        }
        if (flag)
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