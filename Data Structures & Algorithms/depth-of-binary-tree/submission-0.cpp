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
    // void bfs()
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int ans = 1;
        while (!q.empty())
        {
            TreeNode* node = q.front().first;
            ans = q.front().second;
            q.pop();
            if (node->left)
                q.push({node->left, ans + 1});
            if (node->right)
                q.push({node->right, ans + 1});
        }
        return ans;
    }
};
