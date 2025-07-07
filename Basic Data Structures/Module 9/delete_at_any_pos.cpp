#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

void delete_at_any_pos(Node *head, int idx)
{
    Node *curr = head;
    for (int i = 1; i < idx; i++)
    {
        curr = curr->next;
    }
    
    Node* delete_node = curr->next;
    curr->next = curr->next->next;
    curr->next->prev = curr;
    delete delete_node;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_any_pos(head, 1);
    print_forward(head);

    return 0;
}