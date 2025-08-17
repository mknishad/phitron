#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(2);
    v.push_back(3);
    cout << v.capacity() << endl;
    v.clear();
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.resize(10, -1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}