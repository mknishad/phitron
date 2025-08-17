#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = n; i >= 1; i /= 3)
    {
        cout << i << " ";
    }
    cout << endl;

    int k = 2;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
        i *= k;
    }

    return 0;
}