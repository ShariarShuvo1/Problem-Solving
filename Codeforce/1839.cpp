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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[n - 1] == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int count = 0;
            for (int i = n - 1; i > 0; i--)
            {
                if (arr[i] == 0)
                {
                    cout << 0 << ' ';
                }
                else if (arr[i] == 1 && arr[i - 1] == 0)
                {
                    count++;
                    cout << count << ' ';
                    count = 0;
                }
                else
                {
                    count++;
                    cout << 0 << ' ';
                }
            }
            if (arr[0] == 1)
            {
                count++;
                cout << count;
            }
            else
            {
                cout << 0;
            }
            cout << endl;
        }
    }

    return 0;
}