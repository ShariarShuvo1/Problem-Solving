#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int neg = 0;
        for(int i = grid.size()-1;i>=0;i--){
            bool negFound = false;
            for(int j = grid[i].size()-1;j>=0;j--){
                if(grid[i][j]>=0){
                    break;
                }
                else{
                    neg++;
                    negFound = true;
                }
            }
            if(!negFound){
                break;
            }
        }
        return neg;
    }
};