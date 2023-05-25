#include<iostream>
#include<string>
using namespace std;
int main(){
    string n,s="";
    cin>>n;
    for (int i=0; i<n.length(); i++)
        n[i]=tolower(n[i]);
    for (int i=0;i<n.length();i++){
        if ((n[i] != 'a')&& (n[i] != 'o') && (n[i]!='y') && (n[i] !='e') && (n[i] != 'u') && (n[i] != 'i')){
            s+=".";
            s+=n[i];
        }
    }
    cout<<s<<endl;
    return 0;
}