#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = a;
    minimum = min(minimum, b);
    minimum = min(minimum, c);

    int maximum = a;
    maximum = max(maximum, b);
    maximum = max(maximum, c);

    cout << minimum << " " << maximum;

    return 0;
}