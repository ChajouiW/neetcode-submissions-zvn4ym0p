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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> pq,qq;
        if (!q || !p)
            return q == p;
        if (q->val != p->val)
            return false;
        pq.push(p);
        qq.push(q);
        while (!qq.empty())
        {
            int size = qq.size();
            for (int i = 0; i < size; i++)
            {
                if (pq.empty())
                    return false;
                TreeNode *nodeq = qq.front(),*nodep = pq.front();
                qq.pop();pq.pop();
                if (nodeq->val != nodep->val)
                    return false;
                if (nodeq->right && nodep->right)
                {
                    qq.push(nodeq->right);
                    pq.push(nodep->right);
                }
                else if (nodeq->right || nodep->right)
                    return false;
                if (nodeq->left && nodep->left)
                {
                    qq.push(nodeq->left);
                    pq.push(nodep->left);
                }
                else if (nodeq->left || nodep->left)
                    return false;
            }
        }
        return true;
    }
};
