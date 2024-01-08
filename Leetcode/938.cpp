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
    int sum = 0;
    int low_val;
    int high_val;

    void dfs(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        dfs(root->left);
        if (root->val >= low_val && root->val <= high_val)
        {
            sum += root->val;
        }
        dfs(root->right);
    }

    int rangeSumBST(TreeNode *root, int low, int high)
    {
        low_val = low;
        high_val = high;
        dfs(root);
        return sum;
    }
};