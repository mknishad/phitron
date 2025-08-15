#include <iostream>
#include <queue>
using namespace std;

void print_queue(queue<string> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<string> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ins;
        cin >> ins;

        if (ins == "ARRIVE")
        {
            string p;
            cin >> p;
            q.push(p);

        }
        else if (ins == "SERVE")
        {
            if (!q.empty())
            {
                q.pop();
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (ins == "FIRST")
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (ins == "LAST")
        {
            if (!q.empty())
            {
                cout << q.back() << endl;
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
        else if (ins == "COUNT")
        {
            cout << q.size() << endl;
        }
        else if (ins == "SHOW")
        {
            if (!q.empty())
            {
                print_queue(q);
            }
            else
            {
                cout << "No patients" << endl;
            }
        }
    }
}