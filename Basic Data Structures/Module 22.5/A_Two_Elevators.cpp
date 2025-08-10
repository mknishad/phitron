#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int time1 = abs(1 - a);
        int time2 = abs(1 - c) + abs(b - c);

        if (time1 < time2)
        {
            cout << 1 << endl;
        }
        else if (time1 > time2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}