#include <iostream>
#include <map>
#include <queue>
#include <vector>
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

void count_siblings(Node *&root, map<Node *, Node *> parent, map<int, vector<Node *>> level)
{
    queue<Node *> q;
    q.push(root);

    int l = 0;
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            Node *f = q.front();
            q.pop();
            
            f->val = 0;
            vector<Node*> v = level[l];
            for (Node* i : v)
            {
                if (parent[i] != parent[f])
                {
                    f->val++;
                }
            }

            if (f->left)
            {
                q.push(f->left);
            }

            if (f->right)
            {
                q.push(f->right);
            }
        }

        l++;
    }
}

void find_parents(Node *root, map<Node *, Node *> &mp)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;

    if (root->left != NULL)
    {
        mp[root->left] = root;
        find_parents(root->left, mp);
    }
    if (root->right != NULL)
    {
        mp[root->right] = root;
        find_parents(root->right, mp);
    }
}

void find_node_levels(Node *root, map<int, vector<Node *>> &mp)
{
    queue<Node *> q;
    q.push(root);

    int level = 0;
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            Node *f = q.front();
            q.pop();
            mp[level].push_back(f);

            if (f->left)
            {
                q.push(f->left);
            }

            if (f->right)
            {
                q.push(f->right);
            }
        }

        level++;
    }
}

void level_order(Node *root)
{
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
    map<Node *, Node *> parent;
    find_parents(root, parent);
    map<int, vector<Node *>> level;
    find_node_levels(root, level);
    count_siblings(root, parent, level);
    level_order(root);
    return 0;
}