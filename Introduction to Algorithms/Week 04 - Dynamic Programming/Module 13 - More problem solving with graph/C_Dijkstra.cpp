#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
ll parent[100005];

void dijkstra(int src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<ll, ll> par = pq.top();
        pq.pop();
        ll par_node = par.second;
        ll par_dist = par.first;

        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first;
            ll child_dist = child.second;

            if (par_dist + child_dist < dis[child_node])
            {
                dis[child_node] = par_dist + child_dist;
                pq.push({dis[child_node], child_node});
                parent[child_node] = par_node;
            }
        }
    }
}

void print_path(ll node)
{
    if (node == -1)
        return;
    print_path(parent[node]);
    cout << node << " ";
}

int main()
{
    ll n, e;
    cin >> n >> e;

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);    

    if (dis[n] == LLONG_MAX)
        cout << -1;
    else
        print_path(n);

    return 0;
}