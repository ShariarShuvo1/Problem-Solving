#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()>1){
            int i = 0;
            while (i<nums.size()-1){
                int idx = i;
                for (int j = i+1;j<nums.size();j++){
                    if(nums[j]<nums[idx]){
                        idx = j;
                    }
                }
                if(idx!=i){
                    int temp = nums[i];
                    nums[i] = nums[idx];
                    nums[idx] = temp;
                }
                i++;
            }
        }
    }
};