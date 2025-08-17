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
        return NULL;

    Node *root = new Node(x);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left_node = NULL;
        Node *right_node = NULL;

        if (l != -1)
            left_node = new Node(l);
        if (r != -1)
            right_node = new Node(r);

        f->left = left_node;
        f->right = right_node;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void insert(Node *&root, int val)
{
    Node *new_node = new Node(val);

    if (root == NULL)
    {
        root = new_node;
    }
    else if (root->val > val)
    {
        if (root->left == NULL)
            root->left = new_node;
        else
            insert(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new_node;
        else
            insert(root->right, val);
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    cout << endl;
    int val;
    cin >> val;
    insert(root, val);
    level_order(root);
    return 0;
}