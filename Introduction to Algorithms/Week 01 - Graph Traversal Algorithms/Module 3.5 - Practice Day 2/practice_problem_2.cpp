#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
vector<int> v;

int dfs(int src)
{
    v.push_back(src);
    vis[src] = true;

    for (int child : adj_list[src])
        if (!vis[child])
            dfs(child);
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

    vector<int> count;
    for ( int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            v.clear();
            dfs(i);
            sort(v.begin(), v.end());
            count.push_back(v.size());
        }
    }

    sort(count.begin(), count.end());
    for (int x: count)
        cout << x << " ";

    return 0;
}
