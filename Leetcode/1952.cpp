#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    bool primeCheck(int num){
        if(num<=1){
            return false;
        }
        for(int i=2;i<int(sqrt(num))+1;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    bool isThree(int num) {
        if(num>3){
            int sq = sqrt(num);
            if(pow(sq,2) == num){
                if(primeCheck(sq)){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};