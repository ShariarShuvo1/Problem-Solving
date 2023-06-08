#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    void oneD(vector<int>arr){
        cout<<"[ ";
        for(auto i:arr){
            cout<<i<<' ';
        }
        cout<<"], ";
    }
    void twoD(vector<vector<int>> arr){
        for(auto i:arr){
            oneD(i);
        }
        cout<<endl;
    }       

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool didModify = false;
        int len = intervals.size();
        int i = 0;
        while(i<len){
            if(intervals[i][0]>=newInterval[0] && intervals[i][1]<=newInterval[1]){
                intervals[i][0] = newInterval[0];
                intervals[i][1] = newInterval[1];
                if(didModify){
                    intervals.erase(intervals.begin()+i-1);
                    len--;
                    i--;
                }
                didModify=true;
                newInterval = intervals[i];
            }
            else if(intervals[i][0]<newInterval[0] && intervals[i][1]>newInterval[1]){
                if(didModify){
                    intervals.erase(intervals.begin()+i-1);
                    len--;
                    i--;
                }
                didModify=true;
                newInterval = intervals[i];
            }
            else if(intervals[i][0]>=newInterval[0] && intervals[i][0]<=newInterval[1] && intervals[i][1]>=newInterval[0] && intervals[i][1]>=newInterval[1]){
                intervals[i][0] = newInterval[0];
                if(didModify){
                    intervals.erase(intervals.begin()+i-1);
                    len--;
                    i--;
                }
                didModify=true;
                newInterval = intervals[i];
            }
            else if(intervals[i][0]<=newInterval[0] && intervals[i][0]<=newInterval[1] && intervals[i][1]>=newInterval[0] && intervals[i][1]<=newInterval[1]){
                intervals[i][1] = newInterval[1];
                if(didModify){
                    intervals.erase(intervals.begin()+i-1);
                    len--;
                    i--;
                }
                didModify = true;
                newInterval = intervals[i];
            }
            // twoD(intervals);
            i++;
        }
        if(!didModify){
            intervals.push_back(newInterval);
            sort(intervals.begin(),intervals.end());
        }
        return intervals;
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>> interval = {{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int> newInterval = {4,8};
    Solution obj;
    vector<vector<int>> output = obj.insert(interval,newInterval);
    return 0;
}
