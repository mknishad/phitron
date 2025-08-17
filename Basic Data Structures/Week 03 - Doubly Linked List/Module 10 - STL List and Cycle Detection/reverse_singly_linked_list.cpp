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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = tail->next; // Or tail = new_node;
}

void reverse_linked_list(Node *&head, Node *&tail, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }

    reverse_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

void print_linked_list(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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

    print_linked_list(head);
    reverse_linked_list(head, tail, head);
    cout << head->val << endl;
    cout << tail->val << endl;

    return 0;
}