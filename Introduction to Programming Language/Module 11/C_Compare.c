#include <stdio.h>
#include <string.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);

    int cmp = strcmp(x, y);
    if (cmp < 0)
    {
        printf("%s", x);
    } 
    else if (cmp > 0)
    {
        printf("%s", y);
    }
    else
    {
        printf("%s", x);
    }

    return 0;
}


/*
#include <stdio.h>

int main()
{
    char x[21], y[21];
    scanf("%s %s", &x, &y);
    //scanf("%s", &y);

    int i = 0;
    while (1)
    {
        if (x[i] == '\0' && y[i] == '\0')
        {
            printf("%s", x);
            break;
        }
        else if (x[i] == '\0')
        {
            printf("%s", x);
            break;
        }
        else if (y[i] == '\0')
        {
            printf("%s", y);
            break;
        }
        else if (x[i] < y[i])
        {
            printf("%s", x);
            break;
        }
        else if (x[i] > y[i])
        {
            printf("%s", y);
            break;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
*/