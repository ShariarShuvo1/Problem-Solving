#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> one;
        set<int> two;
        map<int, int> num1;
        map<int, int> num2;
        for(auto i: nums1){
            num1[i]++;
        }
        for(auto i: nums2){
            num2[i]++;
        }
        for(auto i: nums1){
            if(num2.count(i) == 0){
                one.insert(i);
            }
        }
        for(auto i: nums2){
            if(num1.count(i) == 0){
                two.insert(i);
            }
        }
        vector<vector<int>> array(2);
        for (auto i: one){
            array[0].push_back(i);
        }
        for (auto i: two){
            array[1].push_back(i);
        }
        return array;
    }
};