#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        res = max(res, arr[i]);
    }
    
    cout << res;

    return 0;
}