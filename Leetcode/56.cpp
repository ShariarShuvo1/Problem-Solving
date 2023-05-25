#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> myArr;
        sort(intervals.begin(), intervals.end());
        for(int i = 0;i<intervals.size();i++){
            if(myArr.size()==0 || intervals[i][0]>myArr[myArr.size()-1][1]){
                myArr.push_back(intervals[i]);
            }
            else{
                myArr[myArr.size()-1][1] = max(myArr[myArr.size()-1][1], intervals[i][1]);
            }
        }
        return myArr;
    }
    void printer(vector<vector<int>>& arr){
        for(int i = 0;i<arr.size();i++){
            cout<<arr[i][0]<<','<<arr[i][1]<<"  ";
        }
        cout<<endl;
    }
};
int main(){
    vector<vector<int>> arr {{2,6},{1,3},{8,10},{15,18}};
    Solution obj;
    obj.merge(arr);
}