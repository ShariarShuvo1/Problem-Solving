#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<numeric>
using namespace std;
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0||j==0||i==m-1||j==n-1)&&grid[i][j]==1){
                    dfs(grid,i,j);
                }
            }
        }
        return accumulate(begin(grid),end(grid),0,[](int sum,auto row){return sum+ accumulate(begin(row),end(row),0);});
    }
    void dfs(vector<vector<int>>&arr,int i, int j){
        arr[i][j] = 0;
        vector<vector<int>> coordss = {{-1,0},{1,0},{0,-1},{0,1}};
        for(vector<int>& coord: coordss){
            int x = i+coord[0];
            int y = j+coord[1];
            if(x>=0 && x<arr.size() && y>=0 && y<arr[0].size() && arr[x][y] ==1){
                dfs(arr,x,y);
            }
        }
    }
};