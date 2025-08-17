#include <stdio.h>

void sort_and_print(int arr[], int n)
{
    int sorted_arr[3];
    for (int i = 0; i < n; i++)
    {
        sorted_arr[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sorted_arr[i] > sorted_arr[j])
            {
                int tmp = sorted_arr[i];
                sorted_arr[i] = sorted_arr[j];
                sorted_arr[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", sorted_arr[i]);
    }
}

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort_and_print(arr, 3);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}