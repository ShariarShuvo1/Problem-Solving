#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1){
            return 1;
        }
        unordered_map<int,vector<int>> myMap;
        for(int i = 0; i <trust.size();i++){
            myMap[trust[i][0]].push_back(trust[i][1]);
        }
        unordered_map<int,int> newMap;
        for(auto ele: myMap){
            for(auto item: ele.second){
                newMap[item]+=1;
            }
        }
        int maxVal = INT_MIN;
        int judge;
        for(auto i: newMap){
            if(i.second>maxVal){
                maxVal = i.second;
                judge = i.first;
            }
        }
        if(maxVal == n-1){
            bool judgeFound = false;
            for(auto i:myMap){
                if(i.first == judge){
                    judgeFound = true;
                    break;
                }
            }
            if(judgeFound){
                return -1;
            }
            else{
                return judge;
            }
        }
        else{
            return -1;
        }
    }
};