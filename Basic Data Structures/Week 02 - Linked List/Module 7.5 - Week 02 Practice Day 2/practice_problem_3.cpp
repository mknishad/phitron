#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);

    if (head == NULL) 
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = tail->next; // Or tail = new_node;
}

int get_max(Node* head) {
    int max_value = INT_MIN;
    
    for (Node* i = head; i != NULL; i = i->next)
    {
        max_value = max(max_value, i->val);
    }
    
    return max_value;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;

    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        
        insert_at_tail(head, tail, x);
    }

    int max = get_max(head);
    cout << max;

    return 0;
}