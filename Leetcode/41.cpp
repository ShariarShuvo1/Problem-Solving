#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        map<int,int> dict;
        for (int i = 1; i<len+1;i++){
            dict[i] = 0;
        }
        for(int i = 0; i<len;i++){
            if (nums[i]>0 && nums[i]<=len){
                dict[nums[i]]++;
            }
        }
        for (int i = 1;i<=len;i++){
            if (dict[i] ==0){
                return i;
            }
        }
        return len+1;
    }
};