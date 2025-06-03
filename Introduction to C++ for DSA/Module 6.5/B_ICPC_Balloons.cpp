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

        int freq[26] = {0};
        for (char c : s)
        {
            freq[c - 'A']++;
        }

        int res = 0;
        for (int f : freq)
        {
            if (f > 0)
            {
                res += f + 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}