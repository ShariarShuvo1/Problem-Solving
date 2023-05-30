#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Solution {
public:
void oneD(vector<string>arr){
        for(auto i:arr){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    void twoD(vector<vector<string>> arr){
        for(auto i:arr){
            oneD(i);
        }
    }
string addStrings(string num1, string num2) {
        string n1,n2;
        if(num1.size()>num2.size()){
            n1=num1;
            n2=num2;
        }
        else{
            n1=num2;
            n2=num1;
        }
        int carry=0;
        string sum;
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());
        for(int i =0; i<n1.size();i++){
            string temp;
            if(i<n2.size()){
                temp = to_string((int)n1[i] -48+ (int) n2[i]-48+carry);
                if(temp.size()>1){
                    carry = (int)temp[0]-48;
                    sum+=temp[1];
                }
                else{
                    sum+=temp;
                    carry=0;
                }
            }
            else{
                temp = to_string((int)n1[i] -48+carry);
                if(temp.size()>1){
                    carry = (int)temp[0]-48;
                    sum+=temp[1];
                }
                else{
                    sum+=temp;
                    carry=0;
                }
            }
        }
        if(carry>0){
            sum+=to_string(carry);
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
    string multiply(string num1, string num2) {
        string n1,n2;
        if(num1.size()>num2.size()){
            n1=num1;
            n2=num2;
        }
        else{
            n1=num2;
            n2=num1;
        }
        vector<string> arr;
        int smallIdx = n2.size()-1;
        string extraZero = "";
        for(int i = 0; i<n2.size();i++){
            int bigIdx = n1.size()-1;
            string s="";
            int carry = 0;
            for(int j=0;j<n1.size();j++){
                string temp = to_string((((int)n1[bigIdx]-48)*((int)n2[smallIdx]-48))+carry);
                if(temp.size()>1){
                    carry = (int)temp[0]-48;
                    s+=temp[1];
                }
                else{
                    s+=temp;
                    carry=0;
                }
                bigIdx--;
            }
            if(carry>0){
                s+=to_string(carry);
            }
            reverse(s.begin(),s.end());
            s+=extraZero;
            extraZero+="0";
            arr.push_back(s);
            smallIdx--;
        }
        string total = "0";
        for(auto i:arr){
            // cout<<i<<endl;
            if(i[0]!='0'){
                total = addStrings(total,i);
            }
        }
        return total;
    }
};
// int main(int argc, char const *argv[])
// {
//     Solution obj;
//     string s1 = "7188";
//     string s2 = "102";
//     string s =obj.multiply(s1,s2);
//     cout<<s<<endl;
//     return 0;
// }
