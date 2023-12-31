#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;

class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        unordered_map<char, int> myMap;
        short maxNum = -1;
        for(int i = 0; i< s.size(); i++){
            if(myMap.count(s[i])==0){
                myMap[s[i]] = i;
                
            }
            else{
                if(i-myMap[s[i]]-1>maxNum){
                    maxNum = i - myMap[s[i]] - 1;
                }
            }
        }
        return maxNum;
    }
};