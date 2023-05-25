#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int lenth = nums.size();
        for(int i = 0; i < nums.size(); i++){
            int prev = ((i-1)%lenth + lenth)% lenth;
            int next = (i+1)%lenth;
            if (nums[i]>nums[next]){
                int temp = nums[prev];
                nums[prev] = nums[i];
                nums[i] = temp;
            }
        }
    }
};