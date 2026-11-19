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
    bool isSame(TreeNode* q, TreeNode* p)
    {
        if (!q || !p)
            return q == p;
        if (q->val != p->val)
            return false;
        return isSame(q->right, p->right) && isSame(q->left, p->left);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if (node->val == subRoot->val && isSame(node, subRoot))
                    return true;
                if (node->right)
                    q.push(node->right);
                if (node->left)
                    q.push(node->left);
            }
        }
        return false;
    }
};
