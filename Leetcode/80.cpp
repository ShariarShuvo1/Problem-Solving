#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i = 0 ; i<nums.size();i++){
            map[nums[i]]+=1;
        }
        int shifted = 0 ;
        for(int i = nums.size()-1;i>=0;i--){
            if(map[nums[i]]>2){
                map[nums[i]]-=1;
                int k = i;
                while(k<nums.size()-shifted-1){
                    nums[k] = nums[k+1];
                    k++;
                }
                shifted++;
            }
        }
        return nums.size()-shifted;
    }
};