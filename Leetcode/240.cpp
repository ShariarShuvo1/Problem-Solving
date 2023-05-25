#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool available = false;
        int l = 0;
        int r = matrix[0].size()-1;
        int size = matrix.size();
        while(l<size && r>=0){
            if(matrix[l][r] == target){
                available = true;
                break;
            }
            else if(matrix[l][r]>target){
                r-=1;
            }
            else if(matrix[l][r]<target){
                l+=1;
            }
        }
        return available;
    }
};