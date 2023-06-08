#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> arr;
    int target;
    int total(vector<int> temp){
        int tot = 0;
        for(auto i:temp){
            tot+=i;
        }
        return tot;
    }
    void calc(TreeNode* root,vector<int> temp){
        if(!root){
            return;
        }
        else if(!root->left && !root->right ){
            temp.push_back(root->val);
            if (total(temp) == target){
                arr.push_back(temp);
            }
        }
        else{
            temp.push_back(root->val);
            calc(root->left,temp);
            calc(root->right,temp);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        vector<int> temp;
        calc(root,temp);
        return arr;
    }
};