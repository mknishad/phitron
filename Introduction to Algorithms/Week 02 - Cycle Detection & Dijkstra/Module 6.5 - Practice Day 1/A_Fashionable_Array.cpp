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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        sort(a, a+n);

        int i = 0, count1 = 0;
        while (a[i] % 2 != a[n - 1] % 2)
        {
            i++;
            count1++;
        }

        int j = n - 1, count2 = 0;
        while (a[0] % 2 != a[j] % 2)
        {
            j--;
            count2++;
        }

        cout << min(count1, count2) << endl;
    }

    return 0;
}