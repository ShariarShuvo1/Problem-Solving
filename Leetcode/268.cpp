#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lastNum = nums[nums.size()-1];
        for(int i = 0; i<lastNum+1;i++){
            if(i!=nums[i]){
                return i;
            }
        }
        return lastNum+1;
    }
};