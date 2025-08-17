#include <stdio.h>

int log2(long long int n) {
    if (n < 2)
    {
        return 0;
    }
    
    return 1 + log2(n / 2);
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%d", log2(n));
    return 0;
}