#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones++;
        }

        int res = ones * (n - 1) + zeros;
        cout << res << endl;
    }

    return 0;
}