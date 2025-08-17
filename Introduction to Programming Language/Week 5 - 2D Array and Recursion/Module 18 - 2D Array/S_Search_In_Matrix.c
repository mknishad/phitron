#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int x;
    scanf("%d", &x);

    int found = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == x) {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            break;
        }
    }

    if (found == -1)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}