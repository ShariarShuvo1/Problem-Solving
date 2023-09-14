#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int length= s.size();
        unordered_set<string> Set;
        vector<int> array(length);

        for (int idx = 0; idx < dictionary.size(); idx++) {
            Set.insert(dictionary[idx]);
        }

        for(int idx = 0; idx < length; idx++) {
            array[idx]= idx + 1;
            for(int start = idx; start >= 0; start--) {
                if(Set.count(s.substr(start, idx - start + 1)))
                    array[idx] = min(array[idx], start==0?0:array[start-1]);
            }
            array[idx] = min(array[idx], idx==0?1:array[idx-1]+1);
        }
        return array[length-1];
    }
};