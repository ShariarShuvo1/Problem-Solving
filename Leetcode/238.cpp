#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        bool zero = false;
        int mult = 1;
        bool allZero = true;
        int count = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] ==0){
                zero = true;
                count ++;
            }
            else{
                mult*=nums[i];
                allZero = false;
            }
        }
        if (count>1){
            mult = 0;
        }
        if(allZero){
            mult = 0;
        }
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] ==0){
                answer.push_back(mult);
            }
            else if(zero){
                answer.push_back(0);
            }
            else{
                answer.push_back(mult/nums[i]);
            }
        }
        return answer;
    }
};