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
    int listSize(ListNode* head)
    {
        int i = 0;
        while(head)
        {
            head = head->next;
            i++;
        }
        return i;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = listSize(head);
        if (n == len)
            return head->next;
        ListNode *curr = head, *prev;
        int i = 0;
        while (len - i != n)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        return head;
    }
};
