class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> Arr;
        int n = rowIndex;
        for (int m=0; m<n+1; m++){
            int r = m;
            double sum = 1;
            for (int i=1; i<=r;i++){
                sum = sum*(n-r+i)/i;
            }
            Arr.push_back((int)sum);
        }
        return Arr;
    }
};