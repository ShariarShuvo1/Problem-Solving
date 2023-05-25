#include<vector>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newArr;
        int i=0;
        int length = nums1.size();
        while (i<length){
            bool hasIt=false;
            for (int j=0;j<nums2.size();j++){
                if ((nums1[i] == nums2[j])){
                    newArr.push_back(nums1[i]);
                    nums1[i] = -1;
                    nums2[j] = -1;
                    break;
                }
            }
            i++;
        }
        return newArr;
    }
};