#include <bits/stdc++.h>
using namespace std;

int main()
{
    //list<int> l1 = {1, 2, 3, 4, 5};
    //int a[] = {10, 20, 30};
    vector<int> v = {40, 50, 60};
    list<int> l2(v.begin(), v.end());
    //l2.clear();
    cout << l2.size() << endl;
    if(l2.empty())
    {
        cout << "Empty" << endl;
    }
    l2.resize(2);
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    l2.resize(5, 100);
    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}