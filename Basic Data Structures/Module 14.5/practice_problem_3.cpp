#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk1;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stk1.push(x);
    }

    stack<int> stk2;
    while (!stk1.empty())
    {
        stk2.push(stk1.top());
        stk1.pop();
    }

    while (!stk2.empty())
    {
        cout << stk2.top() << " ";
        stk2.pop();
    }

    return 0;
}