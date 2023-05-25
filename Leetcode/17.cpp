#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string> dict;
        vector<string> vec;
        dict['2'] = "abc";
        dict['3'] = "def";
        dict['4'] = "ghi";
        dict['5'] = "jkl";
        dict['6'] = "mno";
        dict['7'] = "pqrs";
        dict['8'] = "tuv";
        dict['9'] = "wxyz";
        char first = digits[0];
        for(int a=0;a<dict[first].length();a++){
            string s=dict[first];
            s= s[a];
            if(digits.length()>1){
                char second = digits[1];
                for(int b = 0; b<dict[second].length();b++){
                    string m = dict[second];
                    string t = s;
                    t+=m[b];
                    if(digits.length()>2){
                        char third = digits[2];
                        for(int c = 0; c<dict[third].length();c++){
                            string n = dict[third];
                            string u = t;
                            u+= n[c];
                            if(digits.length()>3){
                                char fourth = digits[3];
                                for(int d = 0; d<dict[fourth].length();d++){
                                    string o =dict[fourth];
                                    string v = u;
                                    v+=o[d];
                                    vec.push_back(v);
                                }
                            }
                            else{
                                vec.push_back(u);
                            }
                        }
                    }
                    else{
                        vec.push_back(t);
                    }
                }
            }
            else{
                vec.push_back(s);
            }
        }
        return vec;
    }
};