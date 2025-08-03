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

void in_order(Node *root)
{
    if (root == NULL)
        return;

    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (root->val > val)
        return search(root->left, val);
    else
        return search(root->right, val);
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    cout << endl;
    int val;
    cin >> val;
    if (search(root, val))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}