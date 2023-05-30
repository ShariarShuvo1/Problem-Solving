#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> myMap;
        for(int i = 0 ;i<s.length();i++){
            myMap[s[i]]++;
        }
        int single =0,total=0;
        for(auto i:myMap){
            if(i.second==1){
                single+=1;
            }
            else if(i.second%2==0){
                total+=i.second;
            }
            else if(i.second%2==1){
                total+= (i.second-1);
                single+=1;
            }
        }
        if(single>0){
            total+=1;
        }
        return total;
    }
};