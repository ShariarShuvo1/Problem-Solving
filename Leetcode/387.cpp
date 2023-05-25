#include<string>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        bool available = false;
        int idx;
        vector<char> arr;
        int n= s.length();
        for (int i=0;i<n;i++){
            arr.push_back(s[i]);
        }
        for (int i=0; i<n;i++){
            if (arr[i]!=NULL){
                bool found = false;
                char val = arr[i];
                for (int j=i+1;j<n;j++){
                    if (val ==s[j]){
                        found = true;
                        arr[i]= NULL;
                        arr[j] = NULL;
                    }
                }
                if (found == false){
                    available = true;
                    idx = i;
                    break;
                }
            }
        }
        if (available){
            return idx;
        }
        else{
            return -1;
        }
    }
};