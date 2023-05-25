class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if (m*n != r*c){
            return mat;
        }
        else{
            vector<int>newArr;
            for(int i=0;i<m;i++){
                for(int j = 0; j<n;j++){
                    newArr.push_back(mat[i][j]);
                }
            }
            vector<vector<int>> Arr;
            int x=0;
            for (int i=0;i<r;i++){
                vector<int> temp;
                for (int j=0;j<c;j++){
                    temp.push_back(newArr[x]);
                    x+=1;
                }
                Arr.push_back(temp);
            }
            return Arr;
            
        }
    }
};