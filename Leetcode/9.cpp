#include<iostream>
#include<string>
#include <sstream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        stringstream st;
        st<<x;
        string val = st.str();
        if (val.length()<2){
            return true;
        }
        else{
            if (val.length()%2==0){
                string first= val.substr(0,val.length()/2);
                string second= val.substr(val.length()/2);
                for (int i = 0; i < second.length() / 2; i++)
                    swap(second[i], second[second.length() - i - 1]);
                if (first==second){
                    return true;
                }
                else{
                    return false;
                }

            }
            else{
                string first= val.substr(0,val.length()/2);
                string second= val.substr((val.length()/2)+1);
                for (int i = 0; i < second.length() / 2; i++)
                    swap(second[i], second[second.length() - i - 1]);
                if (first==second){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
};