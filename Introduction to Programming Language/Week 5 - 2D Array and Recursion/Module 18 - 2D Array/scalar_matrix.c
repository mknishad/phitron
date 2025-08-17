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
        int scalar_matrix = 1;
        int first_value = matrix[0][0];

        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                if (r == c)
                {
                    if (matrix[r][c] != first_value)
                    {
                        scalar_matrix = 0;
                    }
                }
                else
                {
                    if (matrix[r][c] != 0)
                    {
                        scalar_matrix = 0;
                    }
                }
            }
        }

        if (scalar_matrix == 1)
        {
            printf("This is a scalar matrix");
        }
        else
        {
            printf("This is not a scalar matrix");
        }
    }
    else
    {
        // Not a square matrix. So not a scalar matrix.
        printf("This is not a scalar matrix");
    }

    return 0;
}