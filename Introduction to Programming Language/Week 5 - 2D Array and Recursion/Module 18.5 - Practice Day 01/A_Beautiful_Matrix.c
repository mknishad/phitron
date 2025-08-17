#include <stdio.h>

int main()
{
    int matrix[5][5];
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            scanf("%d", &matrix[r][c]);
        }
    }
    
    int row = 0, col = 0;
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            if (matrix[r][c] == 1)
            {
                row = r;
                col = c;
            }
        }
    }
    int moves = 0;
    if (row < 2)
    {
        moves += 2 - row;
    }
    else if (row > 2)
    {
        moves += row - 2;
    }
    if (col < 2)
    {
        moves += 2 - col;
    }
    else if (col > 2)
    {
        moves += col - 2;
    }
    printf("%d\n", moves);

    return 0;
}