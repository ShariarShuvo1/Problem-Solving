#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> arr;
    int n;
    void generator(int i,int j, string s){
        if(s.length()==2*n){
            arr.push_back(s);
            return;
        }
        if(i<n){
            generator(i+1,j,s+"(");
        }
        if(j<i){
            generator(i,j+1,s+")");
        }
    }
    vector<string> generateParenthesis(int sz) {
        n = sz;
        generator(0,0,"");
        return arr;
    }
};