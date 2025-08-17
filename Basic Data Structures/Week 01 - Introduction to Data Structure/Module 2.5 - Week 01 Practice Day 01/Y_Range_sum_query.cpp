#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> sum(n + 1);
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + v[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << endl;
    }

    return 0;
}