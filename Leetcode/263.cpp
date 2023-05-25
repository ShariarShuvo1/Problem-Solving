#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        int x =2;
        while(n%x==0){
            n/=x;
        }
        x =3;
        while(n%x==0){
            n/=x;
        }
        x =5;
        while(n%x==0){
            n/=x;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};