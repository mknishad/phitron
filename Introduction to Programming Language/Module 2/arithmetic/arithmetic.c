#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    int sum = a + b;
    printf("Summation = %d\n", sum);
    int sub = a - b;
    printf("Subtraction = %d\n", sub);
    int mul = a * b;
    printf("Multiplication = %d\n", mul);
    int div = a / b;
    printf("Division = %.2f\n", div);
    int rem = a % b;
    printf("Modulus = %d\n", rem);
    return 0;
}