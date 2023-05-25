#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> lst;
        if ((count(s.begin(), s.end(), '(') != count(s.begin(), s.end(), ')')) || (count(s.begin(), s.end(), '{') != count(s.begin(), s.end(), '}')) || (count(s.begin(), s.end(), '[') != count(s.begin(), s.end(), ']')) || (s.length() == 0)){
            return false;
        }
        else{
            for (int sign=0;sign<s.length();sign++){
                if ((s[sign] == '(') || (s[sign] == '{') || (s[sign] == '[')){
                    lst.push_back(s[sign]);
                }
                else{
                    if (lst.size()==0){
                        return false;
                    }
                    else if ((s[sign] == ')') && (lst[lst.size()-1]== '(')){
                        lst.pop_back();
                    }
                    else if ((s[sign] == '}') && (lst[lst.size()-1]== '{')){
                        lst.pop_back();
                    }
                    else if ((s[sign] == ']') && (lst[lst.size()-1]== '[')){
                        lst.pop_back();
                    }
                    else{
                        return false;
                    }
                }
            }
            if (lst.size() == 0){
                return true;
            }
            else{
                return false;
            }
        }
    }
};