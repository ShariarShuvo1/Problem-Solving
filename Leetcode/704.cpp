#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0] == target){
                return 0;
            }
            else{
                return -1;
            }
        }
        else if(nums.size()==2){
            if(nums[0] == target){
                return 0;
            }
            else if(nums[1] == target){
                return 1;
            }
            else{
                return -1;
            }
        }
        else{
            int lenth = nums.size();
            int i = (lenth-1)/2;
            int mid = lenth;
            bool available = false;
            while(i<lenth){
                cout<<i<<endl;
                if(nums[i] == target){
                    available = true;
                    break;
                }
                else if(nums[i-1]>=target){
                    mid = i;
                    i = i/2;
                }
                else if(nums[i+1]<=target && i+1<lenth){
                    i = i+ ((mid-i)/2);
                }
                else if(nums[i-1]<target && nums[i+1]>target){
                    break;
                }
                else{
                    i++;
                }
            }
            if (available){
                return i;
            }
            else{
                return -1;
            }
        }
        return -1;
    }
};
int main(){
    vector<int>arr{-1,0,3,5,9,12};
    Solution a;
    int val = a.search(arr,13);
    cout<<val<<endl;
}