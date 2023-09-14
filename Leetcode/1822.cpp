#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool zero_found = false;
        int neg_count = 0;
        for(auto i: nums){
            if(i==0){
                zero_found = true;
                break;
            }
            if(i<0){
                neg_count++;
            }
        }
        if (zero_found){
            return 0;
        }
        else if(neg_count%2==0){
            return 1;
        } else{
            return -1;
        }
    }
};