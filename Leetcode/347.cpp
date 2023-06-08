#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<map>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mainMap;
        map<int,vector<int>>sortedMap;
        for(auto i: nums){
            mainMap[i] +=1;
        }
        for(auto i:mainMap){
            sortedMap[i.second].push_back((i.first));
        }
        int x = 1;
        vector<int> arr;
        for (auto it = sortedMap.rbegin(); it != sortedMap.rend(); it++){
            if(x>k){
                break;
            }
            else{
                int val = it->second.size();
                if(x+val>k){
                    for(auto m: it->second){
                        arr.push_back(m);
                        x++;
                        if(x>k){
                            break;
                        }
                    }
                }
                else{
                    for(auto m:it->second){
                        arr.push_back(m);
                        x++;
                    }
                }
            }
        }
        return arr;
    }
};