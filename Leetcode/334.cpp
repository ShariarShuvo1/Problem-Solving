#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        int small=INT_MAX;
        int mid = INT_MAX;
        bool available = false;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<=small){
                small = nums[i];
            }
            else if(nums[i]<=mid){
                mid = nums[i];
            }
            else{
                available = true;
                break;
            }
        }
        return available;
    }
};