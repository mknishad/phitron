#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long int num1 = (long long int) a * b;
    long long int num2 = (long long int) c * d;

    printf("Difference = %lld", num1 - num2);

    return 0;
}