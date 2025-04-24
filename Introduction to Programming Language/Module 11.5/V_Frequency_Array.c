#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int freq[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[num[i]]++;
    }
    
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}