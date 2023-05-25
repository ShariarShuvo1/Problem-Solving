#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
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
    unordered_map<int,bool> dict;
    int x;
    bool target(TreeNode* root){
        if(!root){
            return false;
        }
        else{
            if (dict.count(root->val)){
                return true;
            }
            else{
                dict[x-root->val] = true;
                return target(root->left) || target (root->right);
            }
        }
    }
    bool findTarget(TreeNode* root, int k) {
        x = k;
        return target(root);

    }
};