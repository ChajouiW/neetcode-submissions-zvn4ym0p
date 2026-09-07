/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKNodes(ListNode* head, int k)
    {
        ListNode *curr = head, *prev = nullptr, *next;
        while(k--)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* tmp = head;
        int n = 0;
        while (tmp)
        {
            tmp = tmp->next;
            n++;
        }
        // cout << "zbi\n";
        tmp = head;
        vector<ListNode*> nodes;
        for (int i = 0; i < n; i ++)
        {
            if (n % k == 0 && i > n - k)
                break;
            if (i % k == 0)
                nodes.push_back(tmp);
            tmp = tmp->next;
        }
        ListNode* prev, *ans = new ListNode(0);
        prev = ans;
        for (int i = 0; i < nodes.size() - (n % k != 0); i++)
        {
            prev->next = reverseKNodes(nodes[i], k);
            prev = nodes[i];
        }
        prev->next = nodes.back();
        if (n % k == 0)
            prev->next = NULL;
        return ans->next;
    }
};
