#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> arr;
        for(int i = 0;i<candidates.size();i++){
            int module = target%candidates[i];
            if(module ==0){
                vector<int> temp;
                for(int j = 0; j<target/candidates[i];j++){
                    temp.push_back(candidates[i]);
                }
                // printer(temp);
                arr.push_back(temp);
            }
        }
        // twoDprinter(arr);




        int idx =0;
        for(int j=2;j<candidates.size()+1;j++){
            for(int k =0;k<candidates.size()-idx-1;k++){
                vector<int> temp;
                int val = 0;
                for(int i = k;i<j+k;i++){
                    temp.push_back(candidates[i]);
                    val+=candidates[i];
                }
                if(val == target){
                    arr.push_back(temp);
                }
                printer(temp);
            }
            idx+=1;
        }


        for(int x = 0;x<candidates.size();x++){
            int count =0;
            // cout<<"main val = "<<candidates[x]<<endl;
            while(count<target){
                count+=candidates[x];
                                                            // cout<<"count coming= "<<count<<endl;
                int index =0;
                for(int j=2;j<candidates.size()+1;j++){
                    for(int k =0;k<candidates.size()-index-1;k++){
                        vector<int> temp;
                        int val = count;
                        for(int i = k;i<j+k;i++){
                            temp.push_back(candidates[i]);
                            val+=candidates[i];
                            
                        }
                        // printer(temp);
                        // cout<<val<<endl;
                        if(val == target){
                            for(int m =0;m<count/candidates[x];m++){
                                temp.push_back(candidates[x]);
                            }
                            arr.push_back(temp);
                            // printer(temp);
                        }
                    }
                    index+=1;
                }
            }
            // cout<<endl;
        }
        twoDprinter(arr);
        return arr;
    }






    void printer(vector<int> arr){
        cout<<"[ ";
        for(int i =0;i<arr.size();i++){
            cout<<arr[i]<<' ';
        }
        cout<<']'<<endl;
    }
    void twoDprinter(vector<vector<int>>arr){
        for(int j=0;j<arr.size();j++){
            cout<<"[ ";
            for(int i = 0;i<arr[j].size();i++){
                cout<<arr[j][i]<<' ';
            }
                cout<<"] ";
        }
        cout<<endl;
    }
};

int main(){
    Solution obj;
    // vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    vector<int> arr = {3,5,8};

    obj.combinationSum(arr,11);
}