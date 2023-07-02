#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
bool primeCheck(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i<int(sqrt(num))+1;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int run;
    cin>>run;
    for(int r=0;r<run;r++){
        unsigned long long int num;
        cin>>num;
        if(num>3){
            int sq = sqrt(num);
            if(pow(sq,2) == num){
                if(primeCheck(sq)){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}