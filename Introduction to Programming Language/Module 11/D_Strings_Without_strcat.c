#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d %d\n", len_a, len_b);

    char c[21];
    for (int i = 0; i < len_a; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i <= len_b; i++)
    {
        c[len_a + i] = b[i];
    }
    printf("%s\n", c);

    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    printf("%s %s", a, b);

    return 0;
}