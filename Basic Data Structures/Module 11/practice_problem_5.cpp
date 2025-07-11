#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        l.push_back(val);
    }

    l.sort();
    for (int val: l)
    {
        cout << val << " ";
    }

    return 0;
}