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
        int l, r;
        cin >> l >> r;

        Node *p = q.front();
        q.pop();
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

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return r + l + 1;
}

int main()
{
    Node *root = input_tree();
    cout << count_nodes(root) << endl;
    return 0;
}