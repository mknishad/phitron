#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i <= n; i *= 2)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}