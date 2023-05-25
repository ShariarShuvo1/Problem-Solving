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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root!=nullptr){
            if (root->val == val){
                return root;
            }
            TreeNode* returned1 = searchBST(root->left,val);
            TreeNode* returned2 = searchBST(root->right,val);
            if(returned1 == NULL && returned2==NULL){
                return NULL;
            }
            else{
                if(returned1==nullptr){
                    return returned2;
                }
                else{
                    return returned1;
                }
            }
        }
        else{
            return NULL;
        }
    }
};