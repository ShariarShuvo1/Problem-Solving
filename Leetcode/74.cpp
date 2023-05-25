class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int length = matrix.size();
        bool avialable = false;
        for(int i=0; i<length;i++){
            int len = matrix[i].size();
            if (matrix[i][0]<=target && matrix[i][len-1]>=target){
                for (int j=0; j<matrix[i].size();j++){
                    if (matrix[i][j] == target){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};