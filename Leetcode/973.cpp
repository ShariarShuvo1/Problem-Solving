#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
using namespace std;
class Solution {
public:
    float dist(vector<int>arr){
        float a= sqrt(pow(arr[0]-0,2) + pow(arr[1]-0,2));
        return a;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        map<float,vector<vector<int>>>Map;
        for(auto a:points){
            float d = dist(a);
            Map[d].push_back(a);
        }
        vector<vector<int>> arr;
        for(auto d:Map){
            if(k<=0){
                break;
            }
            for(auto ar: d.second){
                if(k<=0){
                    break;
                }
                k--;
                arr.push_back(ar);
            }
        }
        return arr;
    }
};