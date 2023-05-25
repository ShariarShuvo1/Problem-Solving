// nums = [2,7,11,15], target = 9
// #include <vector>
// #include <iostream>
// using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output_list;
        bool brk=false;
        for (int first=0; first<nums.size() ;first++){
            for (int second=first; second<nums.size() ;second++){
                if (second==first){
                    continue;
                }
                else if (nums.at(first) + nums.at(second) == target){
                    output_list.push_back(first);
                    output_list.push_back(second);
                    brk=true;
                    break;
                }
            }
            if (brk==true){
                break;
            }
        }
        return output_list;

    }
};