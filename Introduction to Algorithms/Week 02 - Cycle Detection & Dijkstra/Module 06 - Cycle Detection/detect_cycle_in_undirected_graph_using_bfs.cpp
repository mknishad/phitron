#include <bits/stdc++.h>
using namespace std;

bool vis[105];
vector<int> adj_list[105];
int parent[105];
bool has_cycle;

void  bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj_list[par])
        {
            if (vis[child] && parent[par] != child)
                has_cycle = true;
            
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
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

    memset(vis, false, sizeof(vis));
    memset(parent, false, sizeof(vis));
    has_cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            bfs(i);
    }

    if(has_cycle)
        cout << "Cycle detected" << endl;
    else
        cout << "No Cycle" << endl;

    return 0;
}