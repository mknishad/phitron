#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int sum = 0;
    int l = 0, r = 0;
    int res = 0;
    while (r < n)
    {
        sum += s[r];
        while (sum > k)
        {
            sum -= s[l];
            l++;
        }

        if (sum == k)
        {
            res++;
            sum -= s[l];
            l++;
        }

        r++;
    }

    cout << res;

    return 0;
}