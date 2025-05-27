#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        
        for (int k = 0; k < n - 1; k++)
        {
            if (arr[k] == 1) 
            {
                arr[k]++;

                if (k > 0 && arr[k - 1] == arr[k]) {
                    arr[k]++;
                }
            }

            if (arr[k + 1] % arr[k] == 0)
            {
                arr[k + 1]++;
            }
        }
        
        for (int l = 0; l < n; l++)
        {
            cout << arr[l] << " ";
        }

        cout << endl;
    }

    return 0;
}