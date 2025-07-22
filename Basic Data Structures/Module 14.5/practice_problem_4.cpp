#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    stack<int> stk;
    while (!q.empty())
    {
        stk.push(q.front());
        q.pop();
    }

    queue<int> q2;
    while (!stk.empty())
    {
        q2.push(stk.top());
        stk.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}