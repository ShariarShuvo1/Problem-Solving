#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(),count = 0;
        unordered_map<int,int> map;
        vector<int>arr;
        arr.push_back(nums[0]);
        for(int  i = 1; i<n;i++){
            arr.push_back(nums[i]+arr[i-1]);
        }
        for(int i = 0;i<n;i++){
            if(arr[i] == k){
                count++;
            }
            if(map.count(arr[i]-k)){
                count+=map[arr[i]-k];
            }
            map[arr[i]]++;
        }
        return count;
    }
};