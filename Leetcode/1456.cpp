#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int max_val = 0;
        for (int i = 0 ; i < k; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                max_val++;
            }
        }
        int temp_val = max_val;
        for (int i = 1; i<(s.size()-k)+1; i++){
            if (s[i-1] == 'a' || s[i-1] == 'e' || s[i-1] == 'i' || s[i-1] == 'o' || s[i-1] == 'u'){
                temp_val--;
            }
            if (s[i+k-1] == 'a' || s[i+k-1] == 'e' || s[i+k-1] == 'i' || s[i+k-1] == 'o' || s[i+k-1] == 'u'){
                temp_val++;
            }
            if (temp_val > max_val){
                max_val = temp_val;
            }
        }
        return max_val;
    }
};