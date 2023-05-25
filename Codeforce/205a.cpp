#include<iostream>
#include<array>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long m= 1000000001;
    long index;
    int arr[t];
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        if (n<m){
            m = n;
            index= i;
        }
        arr[i] = n;
    }
    int count=0;
    for (int i=0; i<t;i++){
        if (arr[i] ==m){
            count++;
        }
    }
    if (count>1){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<index+1<<endl;
    }
}