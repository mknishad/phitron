#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int x, y;
        int sum = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 == 1) {
                sum += i;
            }
        }
        
        printf("%d\n", sum);
    }

    return 0;
}