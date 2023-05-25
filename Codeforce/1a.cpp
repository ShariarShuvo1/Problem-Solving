#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x,y,a;
    cin>>x>>y>>a;
    unsigned long long int m = ceil(x/a);
    unsigned long long int n = ceil(y/a);
    cout<<m*n<<endl;
    return 0;
}