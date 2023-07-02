#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    for(int run = 0 ; run<n;run++){
        long long int a,b;
        cin>>a;
        cin>>b;
        if((a%2!=b%2) || (b*b>a)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}