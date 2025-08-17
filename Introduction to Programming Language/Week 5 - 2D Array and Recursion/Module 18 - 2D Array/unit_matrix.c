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

    if (n == m)
    {
        // Square matrix
        int unit_matrix = 1;

        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                if (r == c)
                {
                    if (matrix[r][c] != 1)
                    {
                        unit_matrix = 0;
                    }
                }
                else
                {
                    if (matrix[r][c] != 0)
                    {
                        unit_matrix = 0;
                    }
                }
            }
        }

        if (unit_matrix == 1)
        {
            printf("This is a unit matrix");
        }
        else
        {
            printf("This is not a unit matrix");
        }
    }
    else
    {
        // Not a square matrix. So not a unit matrix.
        printf("This is not a unit matrix");
    }

    return 0;
}