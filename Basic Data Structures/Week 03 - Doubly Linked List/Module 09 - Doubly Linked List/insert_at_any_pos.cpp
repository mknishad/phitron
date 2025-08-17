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

void insert_at_any_pos(Node *head, int idx, int val)
{
    Node *new_node = new Node(val);

    Node *curr = head;
    for ( int i = 1; i < idx; i++)
    {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next->prev = new_node;
    curr->next = new_node;
    new_node->prev = curr;
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

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 1, 500);
    print_forward(head);

    return 0;
}