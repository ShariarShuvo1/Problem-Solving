#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
    void oneD(vector<string>arr){
        for(auto i:arr){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    void twoD(vector<vector<string>> arr){
        for(auto i:arr){
            oneD(i);
        }
    }
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> myMap;
        vector<string> arr;
        if(s.size()<11){
            return arr;
        }
        for(int i = 0 ; i<s.size()-9;i++){
            string str = "";
            for(int j = i;j<i+10;j++){
                str+=s[j];
            }
            // cout<<str<<endl;
            myMap[str]++;
        }
        for(auto x:myMap){
            if(x.second>1){
                arr.push_back(x.first);
            }
        }
        return arr;
    }
};

// int main(int argc, char const *argv[])
// {
//     Solution obj;
//     string S ="AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
//     vector<string> arr;
//     arr = obj.findRepeatedDnaSequences(S);
//     // obj.oneD(arr);
//     return 0;
// }
