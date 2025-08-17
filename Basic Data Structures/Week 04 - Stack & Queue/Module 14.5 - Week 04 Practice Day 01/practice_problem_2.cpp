#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    
    bool is_same = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            is_same = false;
            break;
        }

        st.pop();
        q.pop();
    }

    if (is_same && st.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}