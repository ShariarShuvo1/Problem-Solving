#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        map<int, int> mp;
        for (int value : nums)
        {
            mp[value]++;
        }
        int maxVal = 0;
        for (auto val : mp)
        {
            if (val.second > maxVal)
            {
                maxVal = val.second;
            }
        }
        vector<vector<int>> arr;
        for (int i = 0; i < maxVal; i++)
        {
            vector<int> temp;
            arr.push_back(temp);
        }
        for (auto val : mp)
        {
            int count = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                if (count == val.second)
                {
                    break;
                }
                count++;
                arr[i].push_back(val.first);
            }
        }
        return arr;
    }
};