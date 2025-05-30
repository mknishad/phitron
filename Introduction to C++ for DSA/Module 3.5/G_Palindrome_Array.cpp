#include <iostream>
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
    
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            cout << "NO";
            return 0;
        }
        
        l++;
        r--;
    }
    
    cout << "YES";

    return 0;
}