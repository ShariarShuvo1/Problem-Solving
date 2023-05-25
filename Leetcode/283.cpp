#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        vector<int>idx;
        for(int i=0;i<nums.size();i++){
            if(nums[i] ==0){
                zeroCount+=1;
                idx.push_back(i);
            }
        }
        for(int i=0;i<zeroCount;i++){
            for(int j =idx[i]-i;j<nums.size()-1;j++){
                nums[j] =nums[j+1];
            }
            nums[nums.size()-1] = 0;
        }
    }
};
