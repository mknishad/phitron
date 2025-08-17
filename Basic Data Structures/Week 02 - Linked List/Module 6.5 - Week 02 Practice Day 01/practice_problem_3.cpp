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

int get_size_of_linked_list(Node* head)
{
    if (head == NULL)
    {
        return 0;
    }

    int size = 1;
    Node* node = head;
    while (node->next != NULL)
    {
        size++;
        node = node->next;
    }

    return size;
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

    int size = get_size_of_linked_list(head);
    
    Node* node = head;

    if (size % 2 != 0)
    {
        for (int i = 0; i < size / 2; i++)
        {
            node = node->next;
        }
        cout << node->val;
    }
    else
    {
        for (int i = 0; i < size / 2 - 1; i++)
        {
            node = node->next;
        }
        cout << node->val << " " << node->next->val;
    }
    
    return 0;
}