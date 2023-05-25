#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int lenth = matrix.size();
        for(int i =0,dec = 0; i<lenth/2;i++,dec+=2){
            int y = lenth-i-1;
            for(int j = 0; j<lenth-dec-1;j++){
                int temp = matrix[i+j][y];
                matrix[i+j][y] = matrix[i][j+i];
                int temp2 = matrix[y][y-j];
                matrix[y][y-j] = temp;
                temp = matrix[y-j][i];
                matrix[y-j][i] = temp2;
                matrix[i][j+i] = temp;
            }
        }
    }
};
