#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;
    pq.pop();
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}