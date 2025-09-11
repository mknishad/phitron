#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll dp[1005];

// O(N)
ll fibo(ll n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}