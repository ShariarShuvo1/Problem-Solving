#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
using namespace std;
class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        map<long, long> mp[nums.size()];
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                long d = (long)nums[i] - nums[j];
                if (mp[j].contains(d))
                {
                    mp[i][d] += mp[j][d];
                    count += mp[j][d];
                }
                mp[i][d] += 1;
            }
        }
        return count;
    }
};