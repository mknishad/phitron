#include <bits/stdc++.h>
using namespace std;

void print_digits(int n)
{
    if (n <= 0)
        return;

    int digit = n % 10;
    print_digits(n / 10);
    cout << digit << " ";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n < 10)
            cout << n;
        else
            print_digits(n);
        cout << endl;
    }

    return 0;
}