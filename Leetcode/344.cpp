#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start =0;
        int end = s.size()-1;
        for (int i =0; i<s.size()/2;i++){
            char temp = s[end];
            s[end] = s[start];
            s[start] = temp;
            start++;
            end--;
        }
    }
};