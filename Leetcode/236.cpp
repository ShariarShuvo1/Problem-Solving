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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q){
            return root;
        }
        TreeNode* first = lowestCommonAncestor(root->left,p,q);
        TreeNode* second = lowestCommonAncestor(root->right,p,q);
        if(first && second){
            return root;
        }
        else{
            if(first){
                return first;
            }
            else{
                return second;
            }
        }
    }
};