#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    cout << *s.begin() << endl;
    cout << *s.end() << endl;
    cout << *(s.end() - 1) << endl;

    for (string::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // after c++ version 11
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}