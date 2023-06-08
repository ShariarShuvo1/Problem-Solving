#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int> arr;
        for(int i = 0;i<s.size();i++ ){
            if(s[i] == '('){
                arr.push_back(i);
            }
            else if(s[i] == ')'){
                if(arr.size()==0){
                    s[i] = '&';
                }
                else{
                    arr.pop_back();
                }
            }
        }
        while(arr.size()!=0){
            s[arr[arr.size()-1]] = '&';
            arr.pop_back();
        }
        string st="";
        for(int  i = 0 ; i<s.size();i++){
            if(s[i]!='&'){
                st.push_back(s[i]);
            }
        }
        return st;
    }
};