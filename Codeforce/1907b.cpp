#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, out = "";
        cin >> s;
        vector<char> arr;
        vector<int> upperQueue;
        vector<int> lowerQueue;
        for (char c : s)
        {
            if (c == 'B')
            {
                int sz = upperQueue.size();
                if (sz > 0)
                {
                    int idx = upperQueue[sz - 1];
                    upperQueue.pop_back();
                    arr[idx] = ' ';
                }
            }
            else if (c == 'b')
            {
                int sz = lowerQueue.size();
                if (sz > 0)
                {
                    int idx = lowerQueue[sz - 1];
                    lowerQueue.pop_back();
                    arr[idx] = ' ';
                }
            }
            else
            {
                arr.push_back(c);
                if (isupper(c))
                {
                    upperQueue.push_back(arr.size() - 1);
                }
                else
                {
                    lowerQueue.push_back(arr.size() - 1);
                }
            }
        }
        for (char c : arr)
        {
            if (c != ' ')
            {
                out += c;
            }
        }
        cout << out << endl;
    }

    return 0;
}