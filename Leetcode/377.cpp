class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> array(target+1, 0);
        array[0] = 1;
        for (int i = 0 ; i <= target; i++){
            for (int j = 0; j < nums.size(); j++){
                if (i >= nums[j]){
                    array[i] = array[i] + array[i-nums[j]];
                }
            }
        }
        return array[array.size()-1];
    }
};