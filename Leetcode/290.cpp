#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string word="";
        for(int i = 0 ; i<s.length();i++){
            if(s[i]==' '){
                arr.push_back(word);
                word="";
            }
            else if(i==s.length()-1){
                word+=s[i];
                arr.push_back(word);
            }
            else{
                word+=s[i];
            }
        }
        if(pattern.length()!=arr.size()){
            return false;
        }
        bool available = true;
        unordered_map<string,char> myMap;
        for(int i = 0 ; i<pattern.size();i++){
            if(myMap.count(arr[i]) ==0){
                bool insideMap = false;
                for(auto x: myMap){
                    if(x.second==pattern[i]){
                        insideMap = true;
                        break;
                    }
                }
                if(insideMap){
                    available = false;
                    break;
                }
                myMap[arr[i]] = pattern[i];
            }
            else{
                if(myMap[arr[i]] != pattern[i]){
                    available = false;
                    break;
                }
            }
        }
        return available;
    }
};