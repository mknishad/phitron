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

    int lowest_number = arr[0], lowest_position = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest_number)
        {
            lowest_number = arr[i];
            lowest_position = i + 1;
        }
    }

    printf("%d %d", lowest_number, lowest_position);

    return 0;
}