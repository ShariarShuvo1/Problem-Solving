#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int l = 0;l<=n;l++){
            int count = 0;
            int x = l;
            while (x>0){
                if(x%2 ==1) {
                    count++;
                }
                x/=2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};