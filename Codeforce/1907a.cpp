#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        char word_part = s[0];
        int num_part = stoi(s.substr(1, 1));
        for(int i = 1; i<=8; i++){
            if(i==num_part){
                continue;
            }
            cout<<word_part<<i<<endl;
        }
        for(int  i = 97; i <=104; i++){
            if(i==int(word_part)){
                continue;
            }
            cout<<char(i)<<num_part<<endl;
        }
    }

    return 0;
}