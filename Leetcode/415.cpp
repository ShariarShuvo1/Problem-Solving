#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        string n1,n2;
        if(num1.size()>num2.size()){
            n1=num1;
            n2=num2;
        }
        else{
            n1=num2;
            n2=num1;
        }
        int carry=0;
        string sum;
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());
        for(int i =0; i<n1.size();i++){
            string temp;
            if(i<n2.size()){
                temp = to_string((int)n1[i] -48+ (int) n2[i]-48+carry);
                if(temp.size()>1){
                    carry = (int)temp[0]-48;
                    sum+=temp[1];
                }
                else{
                    sum+=temp;
                    carry=0;
                }
            }
            else{
                temp = to_string((int)n1[i] -48+carry);
                if(temp.size()>1){
                    carry = (int)temp[0]-48;
                    sum+=temp[1];
                }
                else{
                    sum+=temp;
                    carry=0;
                }
            }
        }
        if(carry>0){
            sum+=to_string(carry);
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};