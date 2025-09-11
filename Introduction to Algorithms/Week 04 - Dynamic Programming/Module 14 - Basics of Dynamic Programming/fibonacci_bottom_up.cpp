#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// O(N)
int main()
{
    ll n;
    cin >> n;
    ll fibo[n + 1];
    fibo[0] = 0;
    fibo[1] = 1;
    for (ll i = 0; i <= n; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    cout << fibo[n] << endl;
    return 0;
}