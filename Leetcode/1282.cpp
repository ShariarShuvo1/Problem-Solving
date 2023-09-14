#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> array;
        map<int, vector<int>> Map;
        for (int i = 0 ; i < groupSizes.size(); i++){
            Map[groupSizes[i]].push_back(i);
            if (Map[groupSizes[i]].size() == groupSizes[i]){
                array.push_back(Map[groupSizes[i]]);
                Map[groupSizes[i]].clear();
            }
        }
        return array;
    }
};