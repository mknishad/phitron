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

bool has_duplicate(Node* head, int val)
{
    Node* node = head;

    while (node != NULL)
    {
        if (node->val == val)
        {
            return true;
        }

        node = node->next;
    }

    return false;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int x;

    while (cin >> x)
    {
        insert_at_tail(head, tail, x);
    }

    Node* node = head;
    while (node != NULL && node->next != NULL)
    {
        if (has_duplicate(node->next, node->val))
        {
            cout << "YES" << endl;
            return 0;
        }

        node = node->next;
    }

    cout << "NO" << endl;
    
    return 0;
}