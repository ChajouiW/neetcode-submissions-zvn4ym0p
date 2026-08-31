/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *tmp = head, *newHead, *newTmp;
        if (!head)
            return NULL;

        unordered_map<Node*, Node*> mp;
        newHead = new Node(tmp->val);
        newTmp = newHead;
        mp[tmp] = newTmp;
        tmp = tmp->next;
        while (tmp)
        {
            newTmp->next = new Node(tmp->val);
            newTmp = newTmp->next;
            mp[tmp] = newTmp;
            tmp = tmp->next;
        }
        newTmp = newHead;
        tmp = head;
        while (newTmp)
        {
            mp[tmp]->random = mp[tmp->random];
            newTmp = newTmp->next;
            tmp = tmp->next;
        }

        return newHead;
    }
};
