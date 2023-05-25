#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int s=0;
    int odd=0;
    int even=0;
    int x=0;
    for (int i=0;i<n;i++){
        cin>>x;
        s+=x;
        if (x%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if (s%2==0){
        cout<<even;
    }
    else{
        cout<<odd;
    }
    return 0;
}

