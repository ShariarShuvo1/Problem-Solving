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
    vector<int>arr;
    void preOrder(TreeNode* head){
        if(head!=nullptr){
            arr.push_back(head->val);
            preOrder(head->left);
            preOrder(head->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preOrder(root);
        return arr;
    }
};