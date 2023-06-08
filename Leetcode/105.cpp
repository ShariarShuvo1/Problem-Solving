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
    TreeNode* builder(vector<int>& preorder,vector<int>& inorder,int& idx,int left,int right){
        if(left>right){
            return nullptr;
        }
        int flag = left;
        while(inorder[flag] != preorder[idx]){
            flag++;
        }
        idx++;
        TreeNode* newNode = new TreeNode(inorder[flag]);
        newNode->left = builder(preorder,inorder,idx,left,flag-1);
        newNode->right = builder(preorder,inorder,idx,flag+1,right);
        return newNode;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int idx = 0;
        return builder(preorder,inorder,idx,0,n-1);
    }
};