#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    
    vector<vector<int>> res;
    vector<int> quad;
    vector<int> nums;
    void finder(long int k,long int start,long int target){
        if(k!=2){
            for(long int i = start; i<(nums.size()-k+1);i++){
                if(i>start && nums[i] == nums[i-1]){
                    continue;
                }
                quad.push_back(nums[i]);
                finder(k-1,i+1,target-nums[i]);
                quad.pop_back();
            }
            return;
        }
        long int l = start;
        long int r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]<target){
                l++;
            }
            else if (nums[l]+nums[r]>target)
            {
                r--;
            }
            else{
                vector<int> temp = quad;
                temp.push_back(nums[l]);
                temp.push_back(nums[r]);
                res.push_back(temp);
                l++;
                while(l<r && (nums[l]==nums[l-1])){
                    l++;
                }
            }
        }
    }
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        if(num.size()<4){
            return res;
        }
        sort(num.begin(),num.end());
        nums =num;
        finder(4,0,target);
        return res;
    }
};