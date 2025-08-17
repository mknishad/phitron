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

void delete_at_head(Node* &head) {
    Node* delete_node = head;
    head = head->next;
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

    delete_at_head(head);
    print_linked_list(head);

    return 0;
}