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

void insert_at_any_pos(Node* &head, int idx, int val)
{
    Node* new_node = new Node(val);
    Node* curr = head;

    for (int i = 1; i < idx; i++)
    {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 1, 100);
    insert_at_any_pos(head, 2, 200);
    insert_at_any_pos(head, 3, 300);

    print_linked_list(head);

    return 0;
}