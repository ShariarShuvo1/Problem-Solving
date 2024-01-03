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
        int n, k;
        cin >> n >> k;
        int start = n - k;
        for (; start > 0; start--)
        {
            cout << start << " ";
        }
        for (int i = n - k + 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}