#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int p1 = 0, i = 0, count = 0;
        const int gSize = g.size();
        const int sSize = s.size();
        while (i < sSize)
        {
            if (p1 >= gSize)
            {
                return count;
            }
            if (s[i] >= g[p1])
            {
                count++;
                p1++;
            }
            i++;
        }
        return count;
    }
};