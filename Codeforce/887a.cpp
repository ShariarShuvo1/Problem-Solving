#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> arr;
    bool oneFound=false;
    for(int i = 0 ; i < s.length();i++){
        if(s[i]=='1'){
            oneFound=true;
        }
        if (oneFound){
            arr.push_back(s[i]);
        }
    }
    int count = 0 ;
    for(int i = 0 ; i<arr.size();i++){
        if(arr[i]=='0'){
            count++;
        }
    }
    if(count>5){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    return 0;
}