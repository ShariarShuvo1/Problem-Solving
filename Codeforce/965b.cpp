#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    vector<string> arr;
    for(int i = 0 ; i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    bool placed = false;
    unordered_map<string,int> Mymap;
    for(int i = 0 ; i <n;i++){
        for(int j = 0;j<n-k+1;j++){
            if(arr[i][j]=='.'){
                
                bool ship=true;
                for(int m = j;m<j+k;m++){
                    if(arr[i][m]=='#'){
                        ship = false;
                        break;
                    }
                }
                
                if (ship){
                    placed = true;
                    for(int x= j;x<j+k;x++){
                        string s="";
                        s+=to_string(i+1);
                        s+=" ";
                        s+=to_string(x+1);
                        Mymap[s]+=1;
                    }
                }
            }
            if(arr[j][i]=='.'){
                bool ship=true;
                for(int m = j;m<j+k;m++){
                    if(arr[m][i]=='#'){
                        ship = false;
                        break;
                    }
                }
                if (ship){
                    placed = true;
                    for(int x= j;x<j+k;x++){
                        string s="";
                        s+=to_string(x+1);
                        s+=" ";
                        s+=to_string(i+1);
                        Mymap[s]+=1;
                    }
                }
            }
        }
    }
    if(!placed){
        cout<<n<<' '<<k<<endl;
    }
    int so_far_max = INT_MIN;
    string s="";
    for(auto x:Mymap){
        if(x.second>so_far_max){
            so_far_max = x.second;
            s = x.first;
        }
    }
    cout<<s<<endl;
    return 0;
}