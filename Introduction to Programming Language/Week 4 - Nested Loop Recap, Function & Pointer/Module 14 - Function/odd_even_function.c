#include <stdio.h>
#include <stdbool.h>

bool isEven1(int a)
{
    return a % 2 == 0;
}

bool isEven2()
{
    int c;
    scanf("%d", &c);

    return c % 2 == 0;
}

void isEven3(int b)
{
    if( b % 2 == 0)
    {
        printf("%d is even\n", b);
    }
    else
    {
        printf("%d is odd\n", b);
    }
}

void isEven4()
{
    int d;
    scanf("%d", &d);

    if( d % 2 == 0)
    {
        printf("%d is even\n", d);
    }
    else
    {
        printf("%d is odd\n", d);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (isEven1(a))
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }

    if (isEven2())
    {
        printf("c is even\n");
    }
    else
    {
        printf("c is odd\n");
    }

    isEven3(b);

    isEven4();

    return 0;
}