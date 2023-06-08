#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    void printer(vector<int> arr){
        for(auto x:arr){
            cout<<x;
        }
        cout<<endl;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int mx= *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        int shift=0;
        if (mn<0){
            shift = abs(mn);
        }
        vector<int> aux(mx+shift+1,0);
        for(auto i:nums){
            aux[i+shift]+=1;
        }
        for(int i = aux.size()-1;i>-1;i--){
            int val = aux[i];
            if(val>0){
                int temp = k-val;
                if(temp<=0){
                    return i-shift;
                }
                else if(temp>0){
                    k-=val;
                }
            }
        }
        return -1;
    }
};