#include <stdio.h>

void print_n(int n) {
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);

        if (i < n) {
            printf(" ");
        }
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    print_n(x);
    return 0;
}