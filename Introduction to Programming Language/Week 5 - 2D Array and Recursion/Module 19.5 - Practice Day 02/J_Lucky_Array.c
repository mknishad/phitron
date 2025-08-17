#include <stdio.h>

void sort_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
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
    
    sort_array(a, n);

    int freq = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            freq++;
        }
        else
        {
            break;
        }
    }

    if (freq % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}