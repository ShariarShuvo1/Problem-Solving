#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        if (len<3){
            return 0;
        }
        else{
            int left = 0;
            int right = len-1;
            int leftVal = 0;
            int rightVal=0;
            int rain = 0;
            while (left<right){
                leftVal = max(leftVal,height[left]);
                rightVal = max(rightVal,height[right]);
                if (leftVal<rightVal){
                    rain+= leftVal-height[left];
                    left++;
                }
                else{
                    rain+=rightVal-height[right];
                    right--;
                }
            }
            return rain;
        }
        return NULL;
    }
};