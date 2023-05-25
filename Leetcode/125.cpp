#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i=0; i<s.length();i++){
            if((int(s[i]) >96 && int(s[i]) <123)|| (int(s[i]) >47 && int(s[i]) <58)){
                st+=s[i];
            }
        }
        bool right = true;
        int i =0, j = st.length()-1;
        for(int n = 0;n<(st.length()/2);n++){
            if (st[i] != st[j]){
                right = false;
                break;
            }
            i+=1;
            j-=1;
        }
        return right;
    }
};