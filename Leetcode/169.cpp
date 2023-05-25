#include<vector>
#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> myMap;
        int lenth = nums.size();
        int val;
        for(int i=0; i<lenth;i++){
            myMap[nums[i]] +=1;
            if(myMap[nums[i]]>lenth/2){
                val = nums[i];
                break;
            }
        }
        return val;
    }
};