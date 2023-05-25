#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>Map;
        bool available = false;
        for(int i = 0;i<nums.size();i++){
            if(Map.find(nums[i]) != Map.end()){
                if(abs(i- Map[nums[i]])<=k){
                    available = true;
                    break;
                }
            }
            Map[nums[i]] = i;
        }
        return available;
    }
};