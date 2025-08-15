#include <iostream>
#include <queue>
#include <climits>
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

void count_leaf_nodes(Node *root, int *freq)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        freq[root->val]++;
        return;
    }

    count_leaf_nodes(root->left, freq);
    count_leaf_nodes(root->right, freq);
}

int main()
{
    int freq[101] = {0};
    Node *root = input_tree();
    count_leaf_nodes(root, freq);
    int mx = INT_MIN;
    for (int n : freq)
    {
        mx = max(mx, n);
    }
    for (int i = 0; i < 101; i++)
    {
        if (freq[i] == mx)
        {
            cout << i;
            break;
        }
    }

    return 0;
}