#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[min_index])
        {
            min_index = i;
        }

        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }

    int tmp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}