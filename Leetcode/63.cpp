#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    signed long long int factorial(int n){
        signed long long int value = 1;
        while(n>1){
            value*=n;
            n--;
        }
        return value;
    }
    int uniquePaths(int m, int n) {
        signed long long int a = factorial(m+n-2);
        signed long long int b = factorial(n-1);
        signed long long int c = factorial(m-1);
        int value = a/(b*c);
        return value;
    }
};