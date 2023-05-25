#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> arr;
        if(nums.size()==0){
            return arr;
        }
        else if(nums.size()==1){
            arr.push_back(to_string(nums[0]));
            return arr;
        }
        else{
            int left = nums[0];
            int right = left;
            for(int i = 1;i<nums.size();i++){
                if(right+1 == nums[i]){
                    right+=1;
                }
                else{
                    if(left==right){
                        arr.push_back(to_string(left));
                        left = nums[i];
                        right = left;
                    }
                    else{
                        string s = to_string(left);
                        s+="->";
                        s+= to_string(right);
                        arr.push_back(s);
                        left = nums[i];
                        right = left;
                    }
                }
            }
            if(left==right){
                arr.push_back(to_string(left));
            }
            else{
                string s = to_string(left);
                s+="->";
                s+= to_string(right);
                arr.push_back(s);
            }
        }
        return arr;
    }
};