#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> ref = matrix;
        unordered_map<int,bool> map;
        for(int i = 0 ; i<matrix.size();i++){
            bool rowDone = false;
            for(int j = 0 ; j< matrix[0].size();j++){
                if(ref[i][j] == 0){
                    if(!rowDone){
                        for(int k = 0;k<matrix[0].size();k++){
                            matrix[i][k] = 0;
                        }
                        rowDone = true;
                    }
                    if(map.count(j)==0){
                        for(int k = 0 ; k<matrix.size();k++){
                            matrix[k][j] = 0;
                        }
                        map[j] = true;
                    }
                }
            }
        }
    }
};