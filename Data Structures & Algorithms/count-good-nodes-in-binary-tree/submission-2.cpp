/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* root, int m)
    {
        if (!root)
            return ;
        if (root->val >= m)
            ans++;
        m = max(m, root->val);
        dfs(root->right, m);
        dfs(root->left, m);

    }
    int goodNodes(TreeNode* root) {
        if (!root)
            return 0;
        dfs(root, -101);
        return ans;
    }
};
