#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool can_reach(ll n)
{
    if (n == 1)
        return true;
    if (n < 1 || n % 10 != 0)
        return false;

    return can_reach(n / 10) || can_reach(n / 20);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (can_reach(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}