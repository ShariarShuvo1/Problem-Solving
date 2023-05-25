#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int run=0;run<t;run++){
        long long int n;
        cin>>n;
        if ((n%2==1) || (n<4)){
            cout<<-1<<endl;
        }
        else{
            long long int max= (n+4)/6;
            long long int min = n/4;
            cout<<max<<' '<<min<<endl;
        }
    }
}
