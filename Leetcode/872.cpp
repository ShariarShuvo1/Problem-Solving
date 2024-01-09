#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> arr;
    void dfs(TreeNode *root)
    {
        if (root == nullptr)
            return;
        if (root->left == nullptr && root->right == nullptr)
        {
            arr.push_back(root->val);
            return;
        }
        dfs(root->left);
        dfs(root->right);
    }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        dfs(root1);
        vector<int> arr1 = arr;
        arr.clear();
        dfs(root2);
        vector<int> arr2 = arr;
        if (arr1.size() != arr2.size())
            return false;
        for (int i = 0; i < arr1.size(); i++)
        {
            if (arr1[i] != arr2[i])
                return false;
        }
        return true;
    }
};