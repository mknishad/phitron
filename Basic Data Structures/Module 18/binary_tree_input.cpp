#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int x;
    cin >> x;

    if (x == -1)
    {
        return NULL;
    }

    Node *root = new Node(x);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left_node = NULL;
        Node *right_node = NULL;
        if (l != -1)
        {
            left_node = new Node(l);
        }
        if (r != -1)
        {
            right_node = new Node(r);
        }

        p->left = left_node;
        p->right = right_node;

        if (left_node)
        {
            q.push(left_node);
        }
        if (right_node)
        {
            q.push(right_node);
        }
    }

    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
        {
            q.push(f->left);
        }

        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}
