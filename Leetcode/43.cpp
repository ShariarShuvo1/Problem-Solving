#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    string summer(string num1,string num2){
        string s="";
        int carry = 0;
        int up = num1.length()-1;
        int down = num2.length()-1;
        if (up<down){
            string temp = num2;
            num2 = num1;
            num1 = temp;
        }
        int i = max(up,down);
        int j = min(up,down);
        while (true){
            if (j>-1){
                int val = (int(num1[i])-48)+(int(num2[j])-48)+carry;
                if (val<10){
                    s+= to_string(val);
                    carry = 0;
                }
                else{
                    int temp = val%10;
                    s+=to_string(temp);
                    carry = val/10;
                }
            }
            else if(carry>0){
                if (i>-1){
                    int val = (int(num1[i])-48)+carry;
                    if (val<10){
                        s+= to_string(val);
                        carry = 0;
                    }
                    else{
                        int temp = val%10;
                        s+=to_string(temp);
                        carry = val/10;
                    }
                }
                else{
                    s+=to_string(carry);
                    carry = 0;
                }
            }
            else{
                s+= num1[i];
            }
            if(carry == 0 && i<0 && j<0){
                break;
            }
            i--;
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string multiply(string num1, string num2) {
        

    }
};