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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root){
            if(key<root->val){
                root->left = deleteNode(root->left,key);
            }
            else if(key>root->val){
                root->right = deleteNode(root->right,key);
            }
            else{
                if(!root->left && !root->right){
                    return nullptr;
                }
                if(!root->left|| !root->right){
                    if(root->left){
                        return root->left;
                    }
                    else{
                        return root->right;
                    }
                }
                TreeNode* newTree = root->left;
                while(newTree->right!=nullptr){
                    newTree = newTree->right;
                }
                root->val = newTree->val;
                root->left = deleteNode(root->left,newTree->val);
            }
        }
        return root;
    }
};