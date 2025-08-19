#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

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
    cout << adj_list[l].size();

    return 0;
}