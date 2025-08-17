#include <stdio.h>

long long int sum_array(int arr[], int n, int i) {
    if (i == n) {
        return 0;
    }

    return arr[i] + sum_array(arr, n, i + 1);
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
    
    long long int sum = sum_array(arr, n, 0);
    printf("%lld", sum);

    return 0;
}