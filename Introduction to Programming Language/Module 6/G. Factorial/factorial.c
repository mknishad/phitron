#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        long long int fac = 1;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            fac *= i;
        }

        printf("%lld\n", fac);
    }

    return 0;
}