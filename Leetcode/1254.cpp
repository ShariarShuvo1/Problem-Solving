#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0; i<grid.size();i++){
            for(int j= 0;j<grid[0].size();j++){
                if(grid[i][j] == 0){
                    count+= dfs(grid,i,j) ?1:0;
                }
            }
        }
        return count;
    }
    bool dfs(vector<vector<int>>& arr,int i, int j){
        if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size()){
            return false;
        }
        if(arr[i][j]==1){
            return true;
        }
        arr[i][j] =1;
        bool a = dfs(arr,i+1,j);
        bool b = dfs(arr,i,j+1);
        bool c = dfs(arr,i-1,j);
        bool d = dfs(arr,i,j-1);
        return a&&b&&c&&d;
    }
};


