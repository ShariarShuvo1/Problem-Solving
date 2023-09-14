#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        map<char, int> Map;
        vector<int> array;
        for (auto ch: s){
            Map[ch]++;
        }
        for(auto pair: Map){
            array.push_back(pair.second);
        }
        sort(array.begin(), array.end(), greater<int>());
        int delt = 0;
        int prev = array[0];
        for (int i = 1; i < array.size(); i++){
            if (array[i] >= prev){
                int temp = max(prev - 1, 0);
                int temp2 = array[i] - temp;
                delt += temp2;
                prev = max(temp, 0);
            } else{
                prev = array[i];
            }
        }
        return delt;
    }
};