#include<string>
using namespace std;
class Solution {
public:
    string adder(int n,string st){
        string s="";
        for(int i = 0; i<n;i++){
            s+=st;
        }
        return s;
    }
    string intToRoman(int num) {
        string s="";
        if(num>=1000){
            int div = num/1000;
            s+=adder(div,"M");
            num = num%1000;
        }
        if(num>=900){
            s+="CM";
            num = num%900;
        }
        if(num>=500){
            s+="D";
            num = num%500;
        }
        if(num>=400){
            s+="CD";
            num = num%400;
        }
        if(num>=100){
            int div = num/100;
            s+=adder(div,"C");
            num = num%100;
        }
        if(num>=90){
            s+="XC";
            num = num%90;
        }
        if(num>=50){
            s+="L";
            num = num%50;
        }
        if(num>=40){
            s+="XL";
            num = num%40;
        }
        if(num>=10){
            int div = num/10;
            s+=adder(div,"X");
            num = num%10;
        }
        if(num>=9){
            s+="IX";
            num = num%9;
        }
        if(num>=5){
            s+="V";
            num = num%5;
        }
        if(num>=4){
            s+="IV";
            num = num%4;
        }
        if(num>=1){
            int div = num/1;
            s+=adder(div,"I");
            num = num%1;
        }
        return s;
    }
};