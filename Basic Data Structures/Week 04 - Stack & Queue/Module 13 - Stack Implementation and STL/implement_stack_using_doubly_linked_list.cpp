#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack 
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    
    void push(int val)
    {
        sz++;

        Node* new_node = new Node(val);

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

    void pop()
    {
        sz--;

        Node* delete_node = tail;
        tail = tail->prev;
        delete delete_node;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    MyStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}