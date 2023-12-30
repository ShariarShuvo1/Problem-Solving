#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
#include <set>
using namespace std;

class Solution
{
public:
    bool makeEqual(vector<string> &words)
    {
        unordered_map<char, int> myMap;
        for (auto word : words)
        {
            for (auto ch : word)
            {
                myMap[ch]++;
            }
        }
        for (auto it : myMap)
        {
            if (it.second % words.size() != 0)
            {
                return false;
            }
        }
        return true;
    }
};