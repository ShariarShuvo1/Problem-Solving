#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        sort(people.begin(),people.end());
        int left = 0;
        int right = people.size()-1;
        while (left<=right){
            if(people[left]+people[right]<=limit){
                left++;
                right--;
                count++;
            }
            else{
                right--;
                count++;
            }
        }
        return count;
    }
};