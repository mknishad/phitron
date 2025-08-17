#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, t;
        cin >> s >> t;
        int size_s = s.size();
        int size_t = t.size();

        int index_s = 0, index_t = 0;
        while (index_s < size_s && index_t < size_t)
        {
            cout << s[index_s++] << t[index_t++];
        }

        while (index_s < size_s)
        {
            cout << s[index_s++];
        }

        while (index_t < size_t)
        {
            cout << t[index_t++];
        }

        cout << endl;
    }

    return 0;
}