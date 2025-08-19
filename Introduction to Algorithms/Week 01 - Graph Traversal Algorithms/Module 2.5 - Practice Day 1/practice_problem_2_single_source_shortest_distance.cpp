#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int l;
    cin >> l;

    memset(vis, false, sizeof(vis));
    bfs(0);
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
            v.push_back(i);
    }
    sort(v.rbegin(), v.rend());

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}