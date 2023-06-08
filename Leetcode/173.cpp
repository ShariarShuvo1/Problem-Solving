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

class BSTIterator {
public:
vector<int> arr;
int idx = -1;
    void listMaker(TreeNode* root){
        if(root){
            listMaker(root->left);
            arr.push_back(root->val);
            listMaker(root->right);
        }
    }
    BSTIterator(TreeNode* root) {
        listMaker(root);
    }
    
    int next() {
        idx++;
        return arr[idx];
    }
    
    bool hasNext() {
        if(idx+1<arr.size()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */