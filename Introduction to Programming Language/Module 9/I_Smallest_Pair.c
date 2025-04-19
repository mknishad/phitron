#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        int min = INT_MAX;

        for (int j = 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                int sum = arr[j] + arr[k] + k - j;
                if (sum < min)
                {
                    min = sum;
                }
            }
        }

        printf("%d\n", min);
    }
    

    return 0;
}