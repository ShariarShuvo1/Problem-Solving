#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prfx="";
        // sort(strs.begin(), strs.end());
        sort(strs.begin(), strs.end(), [](const std::string& first, const std::string& second){
            return first.size() < second.size();
        });
        string word=strs[0];
        for (int i=0;i<word.length();i++){
            int count=0;
            string temp_word= word.substr(0,(word.length()-i));
            for (int element=0;element<strs.size();element++){
                if (temp_word== strs[element].substr(0,temp_word.length()) && (temp_word!=prfx)){
                    prfx=temp_word;
                    count++;
                }
                else if(temp_word != strs[element].substr(0,temp_word.length())){
                    if (temp_word!=""){
                        prfx="";
                        count--;
                    }
                    break;
                }
                else if (temp_word== strs[element].substr(0,temp_word.length())){
                    count++;
                }
            }
            if (count==strs.size()){
                break;
            }
        }
        return prfx;
    }
};