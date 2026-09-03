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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int result;
        int reminder = 0;
        ListNode *node, *dummy = new ListNode(0);
        node = dummy;
        while (l1 || l2 || reminder)
        {
            result = reminder;
            if (l1)
            {
                result += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                result += l2->val;
                l2 = l2->next;
            }
            reminder = result / 10;
            node->next = new ListNode(result % 10);
            node = node->next;
        }
        return dummy->next;
    }
};
