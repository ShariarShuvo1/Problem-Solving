#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int total,witch,percent;
    cin>>total;
    cin>>witch;
    cin>>percent;
    double tot = (total/100.0)*percent;
    int val = ceil(tot);
    if(val>witch){
    cout<<val-witch<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}