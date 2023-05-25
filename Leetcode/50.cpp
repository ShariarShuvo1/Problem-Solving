#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double val = 1.0;
        if(n<-2000 && x>=2){
            return 0.0;
        }
        else if(n>1500 && x>=2){
            return 1;
        }
        if (n<0){
                for(int i = 0;i<abs(n);i++){
                    val/=abs(x);
                }
        }
        else if(n==0){
            return 1.0;
        }
        else if(x==1){
            return x;
        }
        else{
            for(int i = 0; i<n;i++){
                val*=x;
            }
        }
        return val;
    }
};