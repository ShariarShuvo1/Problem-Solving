#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int lenth = columnTitle.length();
        int val=0;
        for(int i = 0,len = lenth-1;i<lenth;i++,len--){
            val+= (int(columnTitle[i])-64) *(pow(26,len));
        }
        return val;
    }
};