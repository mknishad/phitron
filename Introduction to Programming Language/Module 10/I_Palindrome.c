#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", &s);

    int left = 0, right = strlen(s) - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            printf("NO");
            return 0;
        }

        left++;
        right--;
    }
    
    printf("YES");

    return 0;
}