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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    TreeNode* buildTree(istringstream& ss){
        string s;
        ss>>s;
        if(s=="null"){
            return NULL;
        }
        TreeNode* node = new TreeNode(stoi(s));
        node->left = buildTree(ss);
        node->right = buildTree(ss);
        return node;
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        return !root ? " null" : " " + to_string(root->val) + serialize(root->left) + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream ss(data);
        return buildTree(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));