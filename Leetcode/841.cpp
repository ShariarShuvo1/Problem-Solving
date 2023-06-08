#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        if(rooms.size() == 0){
            return true;
        }
        vector<bool>checker;
        for(int i =0 ; i<rooms.size();i++){
            checker.push_back(false);
        }
        vector<int> so_far={0};
        checker[0] = true;
        int i = 0;
        while(i<so_far.size()){
            for(auto x:rooms[so_far[i]]){
                if(checker[x]==false){
                    so_far.push_back(x);
                    checker[x] = true;
                }
            }
            i++;
        }
        bool pos = true;
        for(auto i: checker){
            if (!i){
                pos = false;
                break;
            }
        }
        return pos;

    }
};