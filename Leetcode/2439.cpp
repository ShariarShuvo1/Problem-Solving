class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long int total = 0;
        int currentvalue =0;
        for(int i = 0; i<nums.size();i++){
            total+=nums[i];
            int temp = (total+i)/(i+1);
            if(temp>currentvalue){
                currentvalue = temp;
            }
        }
        return currentvalue;
    }
};