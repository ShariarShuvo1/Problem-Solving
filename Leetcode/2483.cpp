#include<string>

using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int length_of_string = customers.length();
        int array[length_of_string];
        int x = 0;
        int idx= 0;
        for (auto ch: customers){
            if (ch == 'Y'){
                x++;
            } else{
                x--;
            }
            array[idx] = x;
            idx++;
        }
        int max_val = array[0];
        for (int i = 0; i < length_of_string; i++){
            if (array[i] > max_val){
                max_val = array[i];
            }
        }
        x = 0;
        for(auto integer: array){
            if (integer == max_val){
                break;
            }
            x++;
        }
        if (max_val <= 0){
            return 0;
        } else{
            return x + 1;
        }
    }
};