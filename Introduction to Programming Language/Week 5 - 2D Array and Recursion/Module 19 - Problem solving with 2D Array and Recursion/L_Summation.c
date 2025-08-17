#include <stdio.h>
#include <limits.h>

long long int sum(int arr[], int n, int i) {
    if (i == n)
    {
        return 0;
    }

    return arr[i] + sum(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%lld", sum(arr, n, 0));

    return 0;
}