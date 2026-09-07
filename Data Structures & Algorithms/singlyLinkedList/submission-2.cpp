class Node
{
    public:
        int     val;
        Node*   next;
        Node(int v): val(v), next(nullptr){}
        Node(int v, Node* next): val(v), next(next){}
};

class LinkedList {
private:
    Node    *head, *tail;
public:
    LinkedList() {
        head = nullptr;
        tail = head;
    }

    int get(int index) {
        Node *tmp = head;
        int i = 0;
        while (tmp)
        {
            if (i == index)
                return tmp->val;
            tmp = tmp->next;
            i++;
        }
        return -1;
    }

    void insertHead(int val) {
        Node *newNode = new Node(val, head);
        head = newNode;
        if (!tail)
            tail = head;
    }
    
    void insertTail(int val) {
        Node* node = new Node(val);
        if (!tail)
            return insertHead(val);
        tail->next = node;
        tail = tail->next;
    }

    bool remove(int index) {
        Node* curr = head, *prev;
        if (!index && head)
        {
            head = head->next;
            delete curr;
            return true;
        }
        while (index > 0 && curr)
        {
            prev = curr;
            curr = curr->next;
            index--;
        }
        if (index != 0 || !curr)
            return false;
        if (!curr->next)
            tail = prev;
        prev->next = curr->next;
        delete curr;
        return true;
    }

    vector<int> getValues() {
        vector<int> val;
        Node* curr = head;
        while (curr)
        {
            val.push_back(curr->val);
            curr = curr->next;
        }
        return val;
    }
};
