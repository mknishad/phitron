#include <bits/stdc++.h>
using namespace std;

int val[1005];

bool subset_sum(int i, int sum) // O(2^N)
{
    if (i < 0)
        return sum == 0;

    if (val[i] <= sum)
    {
        bool opt1 = subset_sum(i - 1, sum - val[i]);
        bool opt2 = subset_sum(i - 1, sum);
        return opt1 || opt2;
    }
    else
    {
        return subset_sum(i - 1, sum);
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> val[i];
    
    int sum;
    cin >> sum;

    if (subset_sum(n - 1, sum))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}