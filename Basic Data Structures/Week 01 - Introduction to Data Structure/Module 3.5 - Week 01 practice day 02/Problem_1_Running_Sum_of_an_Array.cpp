#include <bits/stdc++.h>
using namespace std;

vector<int> get_running_sum(vector<int> v, int n)
{
    vector<int> running_sum(n);
    running_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        running_sum[i] = running_sum[i - 1] + v[i];
    }

    return running_sum;
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

    vector<int> running_sum = get_running_sum(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << running_sum[i] << " ";
    }

    return 0;
}