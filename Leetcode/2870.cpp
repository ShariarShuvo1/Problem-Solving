#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int count = 0;
        bool possible = true;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second == 1)
            {
                possible = false;
                break;
            }
            count += it.second / 3 + (it.second % 3 + 1) / 2;
        }
        if (possible)
        {
            return count;
        }
        else
        {
            return -1;
        }
    }
};