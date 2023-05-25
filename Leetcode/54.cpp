#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int c = matrix[0].size();
        int r = matrix.size();
        int totalValues = c*r;
        int x=0; //col
        int y = 0; //row
        vector<int> arr;
        while(arr.size()<totalValues){
            for(int i = x;i<c;i++){
                arr.push_back(matrix[y][i]);
            }
            y++;
            for(int i = y;i<r;i++){
                arr.push_back(matrix[i][c-1]);
            }
            c--;
            for(int i = c-1;i>=x;i--){
                arr.push_back(matrix[r-1][i]);
            }
            r--;
            for(int i = r-1;i>=y;i--){
                arr.push_back(matrix[i][x]);
            }
            x++;

        }
        int newValue = arr.size();
        for(int i = 0;i<newValue-totalValues;i++){
            arr.pop_back();
        }
        return arr;
    }
};