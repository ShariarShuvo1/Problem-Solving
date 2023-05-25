#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>arr;
        int lenSpells = spells.size();
        int lenPotions = potions.size();
        sort(potions.begin(),potions.end());
        for(int i = 0 ; i < spells.size(); i++){
            int val = spells[i];
            int l = 0;
            int r = lenPotions-1;
            while(l<=r){
                int mid = l+(r-l)/2;
                long long int mult = val;
                mult*= potions[mid];
                if(mult>=success){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            arr.push_back(lenPotions - l);
        }
        return arr;
    }
};