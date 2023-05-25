#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        signed long long int left =0;
        signed long long int right = n;
        while(right-left>0){
            signed long long int mid = (right+left)/2;
            if(isBadVersion(mid)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};