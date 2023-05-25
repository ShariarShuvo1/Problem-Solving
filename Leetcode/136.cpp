#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(),nums.end());
        int  i = 0;
        int num;
        while (i<length){
            if(i == length-1){
                num = nums[i];
                break;
            }
            else if(nums[i] == nums[i+1]){
                i+=2;
            }
            else if(nums[i]!= nums[i+1]){
                num = nums[i];
                break;
            }
        }
        return num;
    }
};