#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//    int candy(vector<int>& ratings) {
//        vector<int> array(ratings.size(), 1);
//        for(int i = 1; i< ratings.size(); i++){
//            if (ratings[i] > ratings[i-1]){
//                array[i] = array[i-1]+1;
//            }
//        }
//        for(int i = ratings.size() - 2; i >= 0; i--){
//            if (ratings[i] > ratings[i+1]){
//                if (array[i] <= array[i+1]){
//                    array[i] = array[i+1]+1;
//                }
//            }
//        }
//        int sum = 0;
//        for (auto num: array){
//            sum += num;
//        }
//        return sum;
//    }
//};

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n == 1 || n == 0) return n;
        vector <int> giving(n, 1);
        for(int i = 0;  i<n; i++){
            if((i == 0) &&  ratings[i] > ratings[i+1]){
                giving[i] += 1;
            }else if((i == n-1) && ratings[i] > ratings[i-1]){
                giving[i] += 1;
            }else if(ratings[i]> ratings[i-1] || ratings[i] > ratings[i+1]){
                giving[i] += 1;
            }
        }
        int sum = 0;
        for(int i = 0; i<giving.size(); i++){
            sum += giving[i];
        }

        return sum;
    }
};