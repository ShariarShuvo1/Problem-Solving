#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            arr.push_back(1);
        }
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    arr[i] = max(arr[i], arr[j] + 1);
                }
            }
        }
        int mx = 0;
        for (auto elem : arr)
        {
            if (elem > mx)
            {
                mx = elem;
            }
        }
        return mx;
    }
};