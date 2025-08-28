#include <bits/stdc++.h>
using namespace std;

bool vis[105];
bool path_vis[105];
vector<int> adj_list[105];
bool has_cycle;

void  dfs(int src)
{
    vis[src] = true;
    path_vis[src] = true;

    for (int child : adj_list[src])
    {
        if (vis[child] && path_vis[child])
            has_cycle = true;

        if (!vis[child])
            dfs(child);
    }

        path_vis[src] = false;
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
    }

    memset(vis, false, sizeof(vis));
    memset(path_vis, false, sizeof(vis));
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