#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        vector<unsigned int> arr;
        for(int i=0; i<33;i++){
            arr.push_back(pow(2,i));
        }
        for(int i = 0; i<34;i++){
            if (n==arr[i]){
                return true;
            }
        }
        return false;
    }
};