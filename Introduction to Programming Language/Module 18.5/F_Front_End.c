#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        printf("%d ", a[i]);
        if (i != j)
        {
            printf("%d ", a[j]);
        }
        i++;
        j--;
    }

    return 0;
}