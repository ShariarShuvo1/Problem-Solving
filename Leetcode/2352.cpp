#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count  = 0;
        int n = grid.size();
        for(int i = 0; i < n;i++){
            vector<int> r;
            for(int j = 0 ; j<n;j++){
                r.push_back(grid[i][j]);
            }
            for(int j = 0 ;j<n;j++){
                bool notMatched = false;
                for(int k = 0;k<n;k++){
                    if(r[k]!= grid[k][j]){
                        notMatched = true;
                        break;
                    }
                }
                if (!notMatched){
                    count++;
                }
            }
        }
        return count;
    }
};