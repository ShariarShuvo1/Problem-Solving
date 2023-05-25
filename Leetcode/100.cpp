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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return sameTree(p,q);
    }

    bool sameTree(TreeNode* p, TreeNode* q){
        if((p==nullptr && q!=nullptr)|| (p!=nullptr && q==nullptr)){
            return false;
        }
        else if(p==nullptr && q==nullptr){
            return true;
        }
        else{
            return (p->val==q->val) && sameTree(p->left,q->left) && sameTree(p->right,q->right);
        }
    }
};