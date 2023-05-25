#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int number = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int length = nums.size();
        for (int i=0;i<length;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int st=i+1;
            int ed = length-1;
            while (st<ed){
                int sum = nums[i]+ nums[st] +nums[ed];
                if (sum==target){
                    return target;
                }
                if (abs(target-sum)<abs(target-number)){
                    number = sum;
                }
                if(sum>target){
                    ed--;
                }
                else{
                    st++;
                }
            }
        }
        return number;
    }
};