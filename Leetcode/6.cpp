#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        int leap = (numRows-1)*2;
        string st="";
        for (int x = 0; x<numRows;x++){
            if(x==0 || x == numRows-1){
                for(int i = x; i<s.length();i+=leap){
                    st+= s[i];
                }
            }
            else{
                for(int i = x; i<s.length();i+=leap){
                    st+= s[i];
                    if(i+leap-(2*x)<s.length()){
                        st+=s[i+leap-(2*x)];
                    }
                }
            }
        }
        return st;
    }
};