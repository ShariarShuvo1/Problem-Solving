#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int len;
    cin>>len;
    vector<int> arr;
    int negCount =0;
    int soFar = 0;
    for(int i =0;i<len;i++){
        int ele;
        cin>>ele;
        if (ele<0){
            if(negCount==2){
                arr.push_back(soFar);
                negCount=1;
                soFar=0;
            }
            else{
                negCount++;
            }
        }
        soFar++;
        if(i==len-1){
            arr.push_back(soFar);
        }
    }
    cout<<arr.size()<<endl;
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
    
    return 0;
}