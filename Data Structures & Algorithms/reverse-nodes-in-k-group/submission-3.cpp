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
    ListNode* reverseK(ListNode* head, int k)
    {
        ListNode *curr = head, *tmp, *prev = NULL;
        while (k--)
        {
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0, head), *prev, *next, *curr = head;
        prev = dummy;
        while (true)
        {
            next = curr;
            int i = 0;
            for (; i < k && curr; i++)
                curr = curr->next;
            if (i < k)
            {
                prev->next = next;
                break;
            }
            prev->next = reverseK(next, k);
            prev = next;
        }
        return dummy->next;
    }
};
