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
    vector<vector<int>> arr;
    int height(TreeNode* root){
        if (root==nullptr){
            return 0;
        }
        else{
            return 1+ max(height(root->left),height(root->right));
        }
    }
    void levelOrd(TreeNode* root, int idx){
        if(root!=nullptr){
            arr[idx].push_back(root->val);
            int i = idx+1;
            levelOrd(root->left,i);
            levelOrd(root->right,i);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h = height(root);
        for(int i = 0; i<h;i++){
            vector<int> temp;
            arr.push_back(temp);
        }
        levelOrd(root,0);
        return arr;
    }
};