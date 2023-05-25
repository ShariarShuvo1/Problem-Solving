#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> map;
    for (int i = 0 ; i<s.length();i++){
        map[s[i]]+=1;
    }
    if(map['I'] == 0){
        cout<<map['A']<<endl;
    }
    else if(map['I'] ==1){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    
    return 0;
}