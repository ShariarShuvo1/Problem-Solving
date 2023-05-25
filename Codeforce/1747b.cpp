#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<n/2+n%2<<endl;
        if (n>1){
            int x=1, y= 6;
            for (int j=0;j<n;j++){
                cout<<x<<' '<<y<<endl;
                x+=6;
                y+=6;
            }
        }
        else{
            cout<<1<<' '<<3<<endl;
        }

    }
}