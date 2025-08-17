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

void delete_at_any_pos(Node* head, int idx) {
    Node* node = head;
    for (int i = 1; i < idx; i++)
    {
        node = node->next;
    }
    
    Node* delete_node = node->next;
    node->next = node->next->next;
    delete delete_node;
}

void print_linked_list(Node* head) {
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->val << endl;
        curr = curr->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            break;
        }

        insert_at_tail(head, tail, x);
    }

    delete_at_any_pos(head, 3);
    print_linked_list(head);

    return 0;
}