#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int even_count = 0;
            for (int a: arr)
            {
                if (a % 2 == 0)
                {
                    even_count++;
                }
            }
            
            int odd_count = n - even_count;
            cout << abs(odd_count - even_count) / 2 << endl;
        }
    }

    return 0;
}