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

bool has_cycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    if (has_cycle(head))
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "No cycle" << endl;
    }

    return 0;
}