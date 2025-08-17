#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();

        if (len > 10) 
        {
            s.replace(1, len - 2, to_string(len - 2));
        }

        cout << s << endl;
    }

    return 0;
}
