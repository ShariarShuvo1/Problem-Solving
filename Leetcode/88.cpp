#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=0;
        for (int i=m;i<m+n;i++){
            nums1[i] = nums2[x];
            x+=1;
        }
        int length = m+n;
        for (int i=0;i<length-1;++i){
            int swapped = 0;
            for (int j=0;j<(length-i-1);++j){
                if (nums1[j]>nums1[j+1]){
                    int temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                    swapped = 1;
                }
            }
            if (swapped==0){
                break;
            }
        }
    }
};