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

Node *convert_to_bst(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;
    Node* node = new Node(a[mid]);
    node->left = convert_to_bst(a, n, l, mid - 1);
    node->right = convert_to_bst(a, n, mid + 1, r);

    return node;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    Node* root = convert_to_bst(a, n, 0, n - 1);
    level_order(root);

    return 0;
}