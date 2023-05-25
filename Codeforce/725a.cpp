#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    for(int  i = 0; i<n;i++){
        if(s[i]=='<'){
            count++;
        }
        else{
            break;
        }
    }
    for(int  i = n-1; i>=0;i--){
        if(s[i]=='>'){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    
    return 0;
}