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
    new_node->prev = tail;
    tail = new_node;
}

int get_size(Node *head)
{
    Node *curr = head;
    int size = 0;

    while (curr != NULL)
    {
        size++;
        curr = curr->next;
    }

    return size;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    int size1 = get_size(head1);
    int size2 = get_size(head2);

    if (size1 != size2)
    {
        cout << "NO" << endl;
    }
    else
    {
        Node *curr1 = head1;
        Node *curr2 = head2;
        int are_same = true;

        while (curr1 != NULL && curr2 != NULL)
        {
            if (curr1->val != curr2->val)
            {
                are_same = false;
                break;
            }

            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        if (are_same)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}