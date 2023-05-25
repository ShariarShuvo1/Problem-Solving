#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            string s = to_string(num);
            num =0;
            for(int i =0;i<s.size();i++){
                num+= int(s[i])-48;
            }
        }
        return num;
    }
};