#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<int>nums;
    vector<vector<int>> result;
    void power(vector<int> res,int n){
        if(n==0){
            vector<int> arr;
            for(int i = 0 ; i<res.size();i++){
                arr.push_back(res[i]);
            }
            result.push_back(arr);
            return;
        }
        res.push_back(nums[n-1]);
        power(res,n-1);
        res.pop_back();
        power(res,n-1);
    }
    vector<vector<int>> subsets(vector<int>& num) {
        nums = num;
        int n = num.size();
        vector<int> res;
        power(res,n);
        return result;
    }
};