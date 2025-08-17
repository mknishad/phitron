#include <bits/stdc++.h>
using namespace std;

vector<int> get_prefix_sum(vector<int> v, int n)
{
    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    return prefix_sum;
}

vector<int> get_suffix_sum(vector<int> v, int n)
{
    vector<int> suffix_sum(n);
    suffix_sum[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + v[i];
    }

    return suffix_sum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix_sum = get_prefix_sum(v, n);

    vector<int> suffix_sum = get_suffix_sum(v, n);

    for (int i = 0; i < n; i++)
    {
        if (prefix_sum[i] == suffix_sum[i])
        {
            cout << i;
            break;
        }
    }

    return 0;
}