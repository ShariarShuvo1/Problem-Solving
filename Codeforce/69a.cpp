#include<iostream>
using namespace std;
int main()
{
    int n;
    double a=0,b=0,c=0;
    cin>>n;
    for (int run = 0;run<n;run++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if (a==0 && b==0 && c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}