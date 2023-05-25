#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    long long int len1,base1,len2,base2,num1=0,num2=0;
    cin>>len1;
    cin>>base1;
    for(int i = 0 ; i <len1;i++){
        int n;
        cin>>n;
        num1+= n*(pow(base1,(len1-i-1)));
    }
    cin>>len2;
    cin>>base2;
    for(int i = 0 ; i <len2;i++){
        int n;
        cin>>n;
        num2+= n*(pow(base2,(len2-i-1)));
    }
    // cout<<num1<<' '<<num2<<endl;
    if(num1==num2){
        cout<<'='<<endl;
    }
    else if(num1>num2){
        cout<<'>'<<endl;
    }
    else{
        cout<<'<'<<endl;
    }
    
    return 0;
}