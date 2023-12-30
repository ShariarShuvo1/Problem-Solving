#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        unsigned long long int sum = 0;
        while(n--){
            int x;
            cin>>x;
            sum+=x;
        }
        double val = sqrt(sum);
        if(floor(val) == val){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}