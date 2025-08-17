#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello world";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    s.clear();
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
    s = "Hello world";
    s.resize(7);
    cout << s << endl;
    s.resize(15);
    cout << s << endl;
    s.resize(7);
    s.resize(15, 'x');
    cout << s << endl;
    return 0;
}