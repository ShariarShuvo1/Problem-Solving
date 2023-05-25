#include<iostream>
#include<array>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int run=0;run<t;run++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string arr[2];
        int count=0,odd_count=0;
        for (int i=0;i<n;i++){
            if ((int)s[i]%2==1){
                if (odd_count<1){
                    arr[0] = s[i];
                    odd_count++;
                }
                else if(odd_count<2){
                    arr[1] = s[i];
                    odd_count++;
                }
                count++;
            }
        }
        if (count<=1){
            cout<<-1<<endl;
        }
        else{
            cout<<arr[0]<<arr[1]<<endl;
        }
    }
}