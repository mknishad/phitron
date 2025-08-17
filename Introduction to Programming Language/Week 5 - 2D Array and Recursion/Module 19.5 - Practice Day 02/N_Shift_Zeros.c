#include <stdio.h>
#include <limits.h>

int shift_zeros(int a[], int n)
{
    int zero_index = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            for (int j = i; j < zero_index; j++)
            {
                a[j] = a[j + 1];
            }

            a[zero_index] = 0;
            zero_index--;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    shift_zeros(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}