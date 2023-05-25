#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        if(nums.size() == 1){
            if(nums[0] ==target){
                return 0;
            }
            else{
                return -1;
            }
        }
        else if(nums.size() == 2){
            if(nums[0]==target){
                return 0;
            }
            else if(nums[1] == target){
                return 1;
            }
            else{
                return -1;
            }
        }
        else if(nums.size() == 3){
            if(nums[0]==target){
                return 0;
            }
            else if(nums[1] ==target){
                return 1;
            }
            else if(nums[2]==target){
                return 2;
            }
            else{
                return -1;
            }
        }
        else if(nums[0]>nums[right]){
            while (left<right){
                int mid = (left+right)/2;
                if(nums[mid]>nums[right]){
                    left = mid;
                    if(nums[left]<nums[right]){
                        break;
                    }
                    else if(right-left ==1){
                        left = right;
                        break;
                    }
                }
                else{
                    right = mid;
                    if(right-left ==1){
                        left = right;
                        break;
                    }
                    else if(nums[left]<nums[right]){
                        break;
                    }
                }
            }
        }
        right = nums.size()-1;
        if(target>nums[right]){
            right = left;
            left= 0;
        }
        
        while(right-left>1){
            int mid = (left+right)/2;
            if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        if(nums[left] ==target){
            return left;
        }
        else if(nums[right] ==target){
            return right;
        }
        else{
            return -1;
        }
    }
};

int main(){
    Solution obj;
    vector<int> arr = {4,5,1,2,3};
    int val = obj.search(arr,1);
    cout<<val<<endl;
}