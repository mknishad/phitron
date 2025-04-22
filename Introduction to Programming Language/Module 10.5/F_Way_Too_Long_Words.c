#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf("%s", &s);
        int len = strlen(s);
        if (len <= 10)
        {
            printf("%s", s);
        }
        else
        {
            printf("%c%d%c", s[0], len - 2, s[len - 1]);
        }

        printf("\n");
    }

    return 0;
}