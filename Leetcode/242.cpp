#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        if(s_len!=t_len){
            return false;
        }
        else{
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            bool pos = true;
            for(int i=0;i<t_len;i++){
                if (s[i] !=t[i]){
                    pos = false;
                    break;
                }
            }
            return pos;
        }
    }
};