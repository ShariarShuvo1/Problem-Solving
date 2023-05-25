#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int length = nums.size();
        if(length==1){
            if(nums[0]==target){
                return {0,0};
            }
            else{
                return{-1,-1};
            }
        }
        else if(length ==0){
            return {-1,-1};
        }
        int left = 0;
        int right = length-1;
        while(right-left>1){
            int mid = (left+right)/2;
            if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        int idx=0;
        if(nums[left] == target){
            idx = left;
        }
        else if(nums[right] == target){
            idx = right;
        }
        else{
            return {-1,-1};
        }
        if(idx==0){
            left = idx;
            right = idx;
            for(int i = idx;i<length-1;i++){
                if(nums[i+1]!=target){
                    right = i;
                    break;
                }
                else{
                    right = i+1;
                }
            }
            return {left,right};
        }
        else if(idx ==length-1){
            left = idx;
            right = idx;
            for(int i =idx;i>0;i--){
                if(nums[i-1]!=target){
                    left = i;
                    break;
                }
                else{
                    left = i-1;
                }
            }
            return {left,right};
        }
        else if(nums[idx] != nums[idx+1] && nums[idx]!=nums[idx-1]){
            return {idx,idx};
        }
        else{
            left = idx;
            right = idx;
            for(int i =idx;i>0;i--){
                if(nums[i-1]!=target){
                    left = i;
                    break;
                }
                else{
                    left = i-1;
                }
            }
            for(int i = idx;i<length-1;i++){
                if(nums[i+1]!=target){
                    right = i;
                    break;
                }
                else{
                    right = i+1;
                }
            }
            return {left,right};
        }
        return {-1,-1};
    }
};