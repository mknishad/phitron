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

int get_size(Node* head)
{
    Node* curr = head;
    int size = 0;

    while (curr != NULL)
    {
        curr = curr->next;
        size++;
    }

    return size;
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int x;

    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        
        insert_at_tail(head1, tail1, x);
    }

    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        
        insert_at_tail(head2, tail2, x);
    }

    int size1 = get_size(head1);
    int size2 = get_size(head2);
    if (size1 == size2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}