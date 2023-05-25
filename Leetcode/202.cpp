#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<math>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        set<int> mySet;
        while(n!=1){
            int count = 0;
            if(mySet.find(n)==mySet.end()){
                mySet.insert(n);
            }
            else{
                return false;
            }
            while(n!=0){
                count+= pow(n%10,2);
                n=n/10;
            }
            n=count;
        }
        return true;
    }
};