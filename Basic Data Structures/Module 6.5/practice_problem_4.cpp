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

bool is_sorted(Node* head)
{
    Node* node = head;
    while (node != NULL && node->next != NULL)
    {
        if (node->next->val < node->val)
        {
            return false;
        }

        node = node->next;
    }

    return true;
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

    if (is_sorted(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}