#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3};
    // list<int> l2 = l;
    list<int> l2;
    l2.assign(l.begin(), l.end());
    for (auto i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    l2.push_back(4);
    l2.push_front(100);
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    l2.pop_back();
    l2.pop_front();
    for (auto val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << *next(l2.begin(), 2) << endl;

    l2.insert(next(l2.begin(), 2), 100);
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    l.insert(next(l.begin(), 1), l2.begin(), l2.end());
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> v(3, 10);
    l.insert(next(l.begin(), 4), v.begin(), v.end());
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 3));
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 3), next(l.begin(), 6));
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    replace(l.begin(), l.end(), 2, 20);
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l.begin(), l.end(), 100);
    if (it != l.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}