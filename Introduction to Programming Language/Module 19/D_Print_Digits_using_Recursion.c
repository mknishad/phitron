#include <stdio.h>

void print_digits(int n)
{
    if (n == 0)
    {
        return;
    }

    print_digits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        else
        {
            print_digits(n);
        }
        printf("\n");
    }

    return 0;
}