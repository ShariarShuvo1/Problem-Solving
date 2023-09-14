class Solution {
public:
    int countOrders(int n) {
        vector<unsigned long long int> array(n+1, 0);
        array[1] = 1;
        for (int i = 2; i <= n; i++){
            array[i] = array[i-1] * (2 * i - 1) * i;
            array[i] = array[i] % (int)(pow(10, 9) +7);
        }
        return array[n];
    }
};