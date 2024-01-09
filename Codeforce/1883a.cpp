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
        vector<char> arr = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
        string n;
        cin >> n;
        int time = 0;
        int currentCursor = 0;
        for (char c : n)
        {
            int step = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] == c)
                {
                    step = i;
                    break;
                }
            }
            time += (abs(step - currentCursor) + 1);
            currentCursor = step;
        }
        cout << time << endl;
    }

    return 0;
}