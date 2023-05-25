#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>Arr;
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
                if (sum<0){
                    st++;
                }
                else if (sum>0){
                    ed--;
                }
                else{
                    Arr.push_back({nums[i], nums[st] ,nums[ed]});
                    st++;
                    while(nums[st] == nums[st-1] && st<ed){
                        st++;
                    }
                }
            }
        }
        return Arr;
    }
};