#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

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
    int height(TreeNode* root){
        if (root==nullptr){
            return 0;
        }
        else{
            return 1+ max(height(root->left),height(root->right));
        }
    }
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};