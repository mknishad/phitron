#include <stdio.h>

int main()
{
    char x;
    
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z') {
        printf("%c", (char) x + 32);
    } else {
        printf("%c", (char) x - 32);
    }

    return 0;
}