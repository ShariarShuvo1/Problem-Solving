#include<iostream>
#include<map>
#include<string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<string, int> roman_dict {{"I", 1},{"V", 5},{"X", 10},{"L", 50},{"C", 100},{"D", 500},{"M", 1000}};
        int value=0;
        if (s.length()==0){
            value+=roman_dict.at(s);
        }
        else{
            for (int i=0;i<s.length();i++){
                if (i==0){
                    string j(1, s[0]);
                    value+=roman_dict.at(j);
                }
                else{
                    string start(1, s[i]);
                    string finish(1, s[i-1]);
                    if (roman_dict[start]>roman_dict[finish]){
                        value-=roman_dict[finish];
                        value+=(roman_dict[start]-roman_dict[finish]);
                    }
                    else{
                        value+=roman_dict[start];
                    }
                }
            }
        }
        return value;
    }
};