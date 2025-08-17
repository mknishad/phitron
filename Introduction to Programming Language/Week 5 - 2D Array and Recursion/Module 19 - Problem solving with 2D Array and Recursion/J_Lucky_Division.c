#include <stdio.h>
#include <stdbool.h>

bool is_lucky_number(int n)
{
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            return false;
        }
        n /= 10;
    }

    return true;
}

bool is_almost_lucky(int n)
{
    for (int i = 4; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (is_lucky_number(i))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (is_lucky_number(n))
    {
        printf("YES");
    }
    else if (is_almost_lucky(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}