#include<iostream>
#include<vector>
#include<string>
#include<map>
// #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n>0){
            n&= (n-1);
            count++;
        }
        return count;
    }
};