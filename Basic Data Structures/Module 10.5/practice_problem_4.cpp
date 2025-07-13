#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> l)
{
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backword(list<int> l, list<int>::iterator it)
{
    // if (it == l.end())
    // {
    //     return;
    // }

    // auto next_it = it;
    // print_backword(l, ++next_it);
    // cout << *it << " ";

    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int size = l.size();

        if (x == 0)
        {
            l.push_front(v);
            print_forward(l);
            print_backword(l, l.begin());
        }
        else if (x == size)
        {
            l.push_back(v);
            print_forward(l);
            print_backword(l, l.begin());
        }
        else if (x > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            l.insert(next(l.begin(), x), v);
            print_forward(l);
            print_backword(l, l.begin());
        }
    }

    return 0;
}