#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        long int dv = dividend;
        long int ds = divisor;
        if (dividend<0){
            string s = to_string(dividend);
            string st = "";
            for(int i =1;i<s.length();i++){
                st+=s[i];
            }
            dv = stol(st);
        }
        if (divisor<0){
            string s = to_string(divisor);
            string st = "";
            for(int i =1;i<s.length();i++){
                st+=s[i];
            }
            ds = stoll(st);
        }
        if((dividend>=0 &&divisor==1) || (dividend<0 &&divisor==1)){
            if (dividend>2147483647){
                return 2147483647;
            }
            else if(dividend<-2147483648){
                return -2147483647;
            }
            else{
                return dividend;
            }
        }
        else if((dividend<0 &&divisor==-1)){
            if (dv>2147483647){
                return 2147483647;
            }
            else if(dv<-2147483648){
                return -2147483647;
            }
            else{
                return dv;
            }
        }
        else if((dividend>=0 &&divisor==-1)){
            string s = to_string(dividend);
            s = '-' + s;
            long int mn = stol(s);
            if (mn>2147483647){
                return 2147483647;
            }
            else if(mn<-2147483648){
                return -2147483647;
            }
            else{
                return mn;
            }
        }
        long int number = 0;
        while(dv>=ds){
            if((dv-ds-ds-ds-ds-ds-ds-ds)>ds){
                dv-=ds;
                dv-=ds;
                dv-=ds;
                dv-=ds;
                dv-=ds;
                dv-=ds;
                dv-=ds;
                number+=7;
            }
            else{
                dv-=ds;
                number++;
            }
        }
        if((dividend<0 && divisor>=0) || (dividend>=0 && divisor<0)){
            string s = to_string(number);
            s = '-' + s;
            number = stoll(s);
        }
        if (number>2147483647){
            return 2147483647;
        }
        else if(number<-2147483648){
            return -2147483647;
        }
        else{
            return number;
        }
    }
};
