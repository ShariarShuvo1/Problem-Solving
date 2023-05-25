#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> copies;
        for(int i=0;i<nums.size();i++){
            copies.insert(nums[i]);
        }
        if (nums.size() == copies.size()){
            return false;
        }
        else{
            return true;
        }
    }
};