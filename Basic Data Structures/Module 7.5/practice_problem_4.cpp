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

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);

    if (head == NULL) 
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

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

void print_linked_list(Node* head) {
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
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

    int q;
    cin >> q;
    
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int size = get_size(head);

        if (idx > size)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
        }
        
        print_linked_list(head);
    }

    return 0;
}