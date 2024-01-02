#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        unordered_map<char, int> mp;
        for(char c: s){
            mp[c]++;
        }
        int count = 0;
        for(auto it: mp){
            int req = int(it.first)-64;
            if (it.second>=req){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}