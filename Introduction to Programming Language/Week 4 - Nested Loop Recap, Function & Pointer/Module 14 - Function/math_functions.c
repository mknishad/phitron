#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double n;
    scanf("%lf", &n);

    printf("Ceil of %.1lf  = %.1lf\n", n, ceil(n));
    printf("Floor of %.1lf  = %.1lf\n", n, floor(n));
    printf("Round of %.1lf  = %.1lf\n", n, round(n));
    printf("Square root of %.1lf  = %.1lf\n", n, sqrt(n));
    printf("%.1lf to the power %.1lf  = %.1lf\n", n, n, pow(n, n));
    printf("Abs of -11 = %d\n", abs(-11));

    return 0;
}