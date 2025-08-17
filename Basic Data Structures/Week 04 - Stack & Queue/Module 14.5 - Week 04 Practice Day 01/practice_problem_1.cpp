#include <bits/stdc++.h>
using namespace std;

class MyStack 
{
public:
    list<int> l;
    
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    MyStack stk1, stk2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stk1.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        stk2.push(x);
    }
    
    bool is_same = true;
    while (!stk1.empty() && !stk2.empty())
    {
        if (stk1.top() != stk2.top())
        {
            is_same = false;
            break;
        }

        stk1.pop();
        stk2.pop();
    }

    if (is_same && stk1.empty() && stk2.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}