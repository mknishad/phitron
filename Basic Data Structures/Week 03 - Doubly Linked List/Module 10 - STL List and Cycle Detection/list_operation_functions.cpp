#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 3, 5, 5, 2, 3, 6, 8, 9};
    l.sort();
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.sort(greater<int>());
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.unique();
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.reverse();
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}