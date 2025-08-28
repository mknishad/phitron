#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];
int parent[105];
bool has_cycle;

void  dfs(int src)
{
    vis[src] = true;

    for (int child : adj_list[src])
    {
        if (vis[child] && parent[src] != child)
            has_cycle = true;

        if (!vis[child])
        {
            parent[child] = src;
            dfs(child);
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

    memset(vis, false, sizeof(vis));
    memset(parent, false, sizeof(vis));
    has_cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }

    if(has_cycle)
        cout << "Cycle detected" << endl;
    else
        cout << "No Cycle" << endl;

    return 0;
}