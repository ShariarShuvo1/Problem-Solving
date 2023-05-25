#include<vector>
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> arr;
        int totalSub = words.size() * words[0].length();
        if (totalSub>s.length()){
            return arr;
        }
        else{
            for(int i=0;i<s.length()-totalSub+1;i++){
                string st = "";
                for(int j = i;j<i+totalSub;j++){
                    st+=s[j];
                }
                vector<string> tempList;
                for(int j = 0; j<st.length();j+=words[0].length()){
                    string x = "";
                    for(int k = j;k<j+words[0].length();k++){
                        x+=st[k];
                    }
                    tempList.push_back(x);
                }
                bool available = true;
                vector<string> tempArr;
                for(int j=0;j<words.size();j++){
                    tempArr.push_back(words[j]);
                }
                for(int j=0;j<tempList.size();j++){
                    bool inside = false;
                    for(int k = 0;k<tempArr.size();k++){
                        if(tempArr[k] == tempList[j]){
                            inside = true;
                        }
                    }
                    if(inside == false){
                        available = false;
                        break;
                    }
                    else{
                        vector<string> ::iterator it;
                        it = find(tempArr.begin(),tempArr.end(), tempList[j]);
                        tempArr.erase(it);
                    }
                }
                if(available){
                    arr.push_back(i);
                }
            }
            return arr;
        }
        return arr;
    }
};