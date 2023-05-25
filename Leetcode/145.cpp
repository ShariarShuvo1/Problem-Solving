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
    vector<int> arr;
    void postOrder(TreeNode* root){
        if (root!=nullptr){
            postOrder(root->left);
            postOrder(root->right);
            arr.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return arr;
    }
};