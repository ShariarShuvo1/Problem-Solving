#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    string a,b;
    bool checker(int i , int j){
        if(i>=a.length() && j>=b.length()){
            return true;
        }
        if (j>=b.length()){
            return false;
        }
        bool same = i<a.length() && (a[i] == b[j] || b[j] =='.');
        if((j+1)<b.length() && b[j+1] =='*'){
            return checker(i,j+2) || (same && checker(i+1,j));
        }
        if(same){
            return checker(i+1,j+1);
        }
        return false;
    }
    bool isMatch(string s, string p) {
        a = s;
        b = p;
        return checker(0,0);
    }
};