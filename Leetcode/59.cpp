#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr;
        vector<vector<int>> mainArr;
        for(int i =0;i<n;i++){
            vector<int> temp;
            for(int j = 0 ; j<n;j++){
                temp.push_back(0);
            }
            arr.push_back(temp);
            mainArr.push_back(temp);
        }

        int c = arr[0].size();
        int r = arr.size();
        int totalValues = c*r;
        int x=0; //col
        int y = 0; //row
        int count =0;
        while(count<totalValues){
            for(int i = x;i<c && count<totalValues;i++){
                mainArr[y][i] = count+1;
                count++;
            }
            y++;
            for(int i = y;i<r && count<totalValues;i++){
                mainArr[i][c-1] = count+1;
                count++;
            }
            c--;
            for(int i = c-1;i>=x && count<totalValues;i--){
                mainArr[r-1][i] = count+1;
                count++;
            }
            r--;
            for(int i = r-1;i>=y && count<totalValues;i--){
                mainArr[i][x] = count+1;
                count++;
            }
            x++;

        }
        return mainArr;
    }
};