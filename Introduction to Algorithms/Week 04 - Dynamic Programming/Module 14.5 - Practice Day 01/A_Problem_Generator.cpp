#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        
        string a;
        cin >> a;

        int freq[7] = {0};

        for (char c : a)
            freq[c - 'A']++;
        
        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            if (freq[i] < m)
                count += m - freq[i];
        }

        cout << count << endl;
    }

    return 0;
}