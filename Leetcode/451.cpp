#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> myMap;
        for(auto ch: s){
            myMap[ch]+=1;
        }
        map<int,vector<char>>Map;
        for(auto x:myMap){
            Map[x.second].push_back(x.first);
        }
        s="";
        for(auto it = Map.rbegin(); it != Map.rend(); it++){
            for(auto ch: it->second){
                for(int i = 0 ; i<it->first;i++){
                    s+=ch;
                }
            }
        }
        return s;
    }
};