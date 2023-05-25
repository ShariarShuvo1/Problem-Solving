#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxValue = NULL;
        int sum = 0;
        for (int i = 0; i< nums.size();i++){
            if (sum+nums[i] > nums[i]){
                sum = sum+nums[i];
            }
            else{
                sum = nums[i];
            }
            if (i==0){
                maxValue = sum;
            }
            else{
                if (sum>maxValue){
                    maxValue = sum;
                }
            }
        }
        return maxValue;
        
    }
    
};