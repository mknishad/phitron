#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    
    for (int r = 0; r < n; r++)
    {
        for (int c = m - 1; c >= 0; c--)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    return 0;
}