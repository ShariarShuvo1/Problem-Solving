#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>Map;
        if(s.length()!=t.length()){
            return false;
        }
        else{
            bool work = true;
            for(int i=0;i<s.length();i++){
                if(Map.find(s[i]) == Map.end()){
                    bool avail = false;
                    for(auto x:Map){
                        if (x.second == t[i]){
                            avail=true;
                            break;
                        }
                    }
                    if(avail){
                        work=false;
                        break;
                    }
                    Map[s[i]] = t[i];
                }
                else{
                    if(Map[s[i]] != t[i]){
                        work = false;
                        break;
                    }
                }
            }
            return work;
        }
        return true;
    }
};