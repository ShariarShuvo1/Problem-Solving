#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    int partitionString(string s) {
        int total = 0;
        string st = "";
        for (int i = 0; i<s.length();i++){
            bool available = false;
            for(int j=0;j<st.size();j++){
                if(s[i] == st[j]){
                    available = true;
                    break;
                }
            }
            if(available){
                st =s[i];
                total++;
                if (i==s.size()-1){
                    total++;
                }
            }
            else{
                st+=s[i];
                if (i==s.size()-1){
                    total++;
                }
            }
        }
        return total;
    }
};