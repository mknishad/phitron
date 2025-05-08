#include <stdio.h>

int my_len(char s[])
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}

int main()
{
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", &s);
    printf("%d", my_len(s));
    return 0;
}