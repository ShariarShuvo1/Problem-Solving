#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            int ch = columnNumber%26;
            if (ch==0){
                ch =26;
            }
            columnNumber = (columnNumber-ch)/26;
            s= char(ch+64) + s;
        }
        return s;
    }
};