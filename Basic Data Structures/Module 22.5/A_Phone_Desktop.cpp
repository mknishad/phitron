#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int desktop = 0;
        desktop += y / 2;
        y -= desktop * 2;

        x -= desktop * 7;

        if (y > 0)
        {
            desktop++;
            x -= 11;
        }

        if (x > 0) 
        {
            int d = x / 15;
            desktop += d;
            x -= d * 15;
        }

        if (x > 0)
        {
            desktop++;
        }

        cout << desktop << endl;
    }

    return 0;
}