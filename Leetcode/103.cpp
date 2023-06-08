#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
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
    int height(TreeNode* root,int idx){
        if(!root){
            return 0;
        }
        else{
            return 1+ max(height(root->left,idx+1),height(root->right,idx+1));
        }
    }
    void appender(TreeNode* root,int idx){
        if(root){
            arr[idx].push_back(root->val);
            appender(root->left,idx+1);
            appender(root->right,idx+1);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int hite = height(root,0);
        for(int i =0 ; i<hite;i++){
            vector<int> temp;
            arr.push_back(temp);
        }
        appender(root,0);
        for(int i = 0 ; i<arr.size();i++){
            if(i%2==1){
                reverse(arr[i].begin(),arr[i].end());
            }
        }
        return arr;
    }
};