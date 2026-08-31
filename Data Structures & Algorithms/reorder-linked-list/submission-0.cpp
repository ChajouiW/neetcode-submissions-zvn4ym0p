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
#include <unistd.h>
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *mid, *last = head;
        mid = head;
        while (last->next && last->next->next)
        {
            mid = mid->next;
            last = last->next->next;
        }
        if (last->next)
        {
            last = last->next;
            mid = mid->next;
        }
        ListNode *tmp = mid, *next, *curr = mid->next;
        mid->next = NULL;
        while (curr)
        {
            next = curr->next;
            curr->next = tmp;
            tmp = curr;
            curr = next;
        }
        ListNode* first = head;
        while (last->next)
        {
            next = first->next;
            tmp = last->next;
            first->next = last;
            last->next = next;
            first = next;
            last = tmp;
        }
    }
};
