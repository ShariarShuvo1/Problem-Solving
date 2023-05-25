class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Arr;
        for (int x=0; x<numRows;x++){
            vector<int> temp;
            for (int m=0; m<x+1; m++){
                int n = x;
                int r = m;
                double sum = 1;
                for (int i=1; i<=r;i++){
                    sum = sum*(n-r+i)/i;
                }
                temp.push_back((int)sum);
            }
            Arr.push_back(temp);
        }
        return Arr;
    }
};