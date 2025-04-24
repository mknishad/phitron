#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        char s[51];
        char t[51];
        scanf("%s %s", &s, &t);

        int s_len = strlen(s);
        int t_len = strlen(t);

        int j = 0;
        while (j < s_len && j < t_len)
        {
            printf("%c%c", s[j], t[j]);
            j++;
        }

        while (j < s_len)
        {
            printf("%c", s[j++]);
        }

        while (j < t_len)
        {
            printf("%c", t[j++]);
        }

        printf("\n");
    }

    return 0;
}