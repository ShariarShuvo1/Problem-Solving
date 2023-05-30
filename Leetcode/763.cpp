#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<map>
#include<cmath>
using namespace std;
class Solution {
public:
    void oneD(vector<int>arr){
        for(auto i:arr){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    void twoD(vector<vector<int>> arr){
        for(auto i:arr){
            oneD(i);
        }
    }
    void myMapPrint(unordered_map<char, vector<int>> myMap){
        for(auto x: myMap){
            cout<<x.first<<" : ";
            oneD(x.second);
        }
    }
    vector<int> partitionLabels(string s) {
        unordered_map<char, vector<int>> myMap;
        for(int i = 0 ; i<s.length();i++){
            if(myMap.count(s[i])==0){
                myMap[s[i]] = {i};
            }
            else{
                if(myMap[s[i]].size()==1){
                    myMap[s[i]].push_back(i);
                }
                else{
                    myMap[s[i]][1] = i;
                }
            }
        }
        unordered_map<char, vector<int>>::iterator it= myMap.begin();
        vector<vector<int>> newArr;
        while(it!=myMap.end()){
            if(it->second.size()==1){
                it->second.push_back(it->second[0]);
            }
            newArr.push_back(it->second);
            it++;
        }
        // myMapPrint(myMap);
        // cout<<"Hey"<<endl;
        sort(newArr.begin(),newArr.end());
        vector<vector<int>> arr;
        for(auto item:newArr){
            bool found = false;
            for(int i =0;i<arr.size();i++){
                if(arr[i][0]>=item[0] && arr[i][1]<=item[1]){
                    arr[i][0]=item[0];
                    arr[i][1] = item[1];
                    found = true;
                    break;
                }
                else if(arr[i][0]<item[0] && arr[i][1]>item[1]){
                    found = true;
                    break;
                }
                else if(arr[i][0]>=item[0] && arr[i][0]<=item[1] && arr[i][1]>=item[0] && arr[i][1]>=item[1]){
                    arr[i][0] = item[0];
                    found= true;
                    break;
                }
                else if(arr[i][0]<=item[0] && arr[i][0]<=item[1] && arr[i][1]>=item[0] && arr[i][1]<=item[1]){
                    arr[i][1] = item[1];
                    found=true;
                    break;
                }
            }
            if(!found){
                arr.push_back(item);
            }
        }
        // twoD(arr);
        // cout<<"hey"<<endl;
        vector<int> output;
        for(int i = 0 ; i < arr.size();i++){
            output.push_back(arr[i][1]-arr[i][0]+1);
        }
        return output;
    }
};

// int main(int argc, char const *argv[])
// {
//     string s ="ababcbacadefegdehijhklij";
//     s = "caedbdedda";
//     s="eccbbbbdec";
//     s="bbvemgjwruuwalp";
//     Solution obj;
//     vector<int> output = obj.partitionLabels(s);
//     obj.oneD(output);
//     return 0;
// }
