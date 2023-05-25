#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        int previous = 0;
        sort(intervals.begin(),intervals.end());
        for(int i = 1;i<intervals.size();i++){
            if(intervals[i][0]<intervals[previous][1]){
                count++;
                if(intervals[i][1]<=intervals[previous][1]){
                    previous = i;
                }
            }
            else{
                previous = i;
            }
        }
        return count;
    }
};