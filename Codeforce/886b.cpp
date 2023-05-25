#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> myMap;
    vector<int> arr;
    for(int i = 0 ; i<n;i++){
        int val;
        cin>>val;
        myMap[val] = i;
    }
    int low = INT_MAX;
    int idx;
    map<int, int>::iterator it = myMap.begin();
    while(it!=myMap.end()){
        if(it->second<low){
            low = it->second;
            idx = it->first;
        }
        it++;
    }
    cout<<idx<<endl;
    
    return 0;
}