#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        if(n==1){
            return "1";
        }
        else{
            for(int x = 0;x<n-1;x++){
                string st="";
                int i=0;
                while(i<s.length()){
                    int val =1;
                    char ch = s[i];
                    for(int j=i+1;j<s.length();j++){
                        if (s[j] != ch){
                            break;
                        }
                        else{
                            val++;
                        }
                    }
                    st= st+ to_string(val) + ch;
                    i+=val;
                }
                s = st;
            }
        }
        return s;
    }
};