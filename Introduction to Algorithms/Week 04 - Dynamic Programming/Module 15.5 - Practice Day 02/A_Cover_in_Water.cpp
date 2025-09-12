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

        bool cons3 = false;
        int empty = 0;
        int three_count = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                empty++;
                three_count++;
                if (three_count >= 3)
                    cons3 = true;
            }
            else
            {
                three_count = 0;
            }
        }

        if (cons3)
            cout << 2 << endl;
        else
            cout << empty << endl;
    }

    return 0;
}