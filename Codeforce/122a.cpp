#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
bool myLuckey(string n){
    bool isLuckey = true;
    for(int i = 0 ; i<n.size();i++){
        if(n[i]!='7' && n[i]!='4'){
            isLuckey=false;
            break;
        }
    }
    return isLuckey;
}

int main()
{
    string n;
    cin>>n;
    bool isLuckey = myLuckey(n);
    if(!isLuckey){
        for(int i = 1;i<1001;i++){
            bool val = myLuckey(to_string(i));
            if(val){
                if(stoi(n)%i==0){
                    isLuckey=true;
                    break;
                }
            }
        }
    }
    string ans = (isLuckey) ? "YES": "NO";
    cout << ans << endl;

    return 0;
}