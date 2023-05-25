#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int prev = prices[0];
        for (int i=1;i<prices.size();i++){
            if (((prices[i] - prev) >0)&& ((prices[i]-prev) >max)){
                max = prices[i]-prev;
            }
            if (prices[i]<prev){
                prev = prices[i];
            }
        }
        return max;
    }
};