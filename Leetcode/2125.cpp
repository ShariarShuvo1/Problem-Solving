#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int count = 0;
        int i = 0;
        while (i < bank.size())
        {
            string s = bank[i];
            int LaserCount = std::count(s.begin(), s.end(), '1');
            int nextIdx = -1;
            int nextVal = -1;
            for (int j = i + 1; j < bank.size(); j++)
            {
                string nextS = bank[j];
                int nextLC = std::count(nextS.begin(), nextS.end(), '1');
                if (nextLC > 0)
                {
                    nextIdx = j;
                    nextVal = nextLC;
                    break;
                }
            }
            if (nextVal > 0)
            {
                count += (LaserCount * nextVal);
            }
            if (nextIdx > -1)
            {
                i = nextIdx;
                continue;
            }
            i++;
        }
        return count;
    }
};