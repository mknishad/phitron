#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.insert(v.begin() + 2, 100);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v2 = {200, 300};
    v.insert(v.begin() + 3, v2.begin(), v2.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin() + 2);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin() + 2, v.begin() + 4);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.push_back(2);
    replace(v.begin(), v.end() - 1, 2, 200);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    //vector<int>::iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 100);
    if (it != v.end())
    {
        cout << "found " << *it << endl;
    }
    else
    {
        cout << "not found " << *it << endl;
    }
    return 0;
}