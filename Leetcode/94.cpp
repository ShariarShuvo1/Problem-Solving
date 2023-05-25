#include<iostream>
#include<vector>
#include<string>
#include<map>
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        inOrderTraversal(arr,root);
        return arr;
    }

    void inOrderTraversal(vector<int>& arr, TreeNode* root){
        if (root != nullptr){
            inOrderTraversal(arr,root->left);
            arr.push_back(root->val);
            inOrderTraversal(arr,root->right);
        }
    }
};