#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int count_vowels(char s[], int i) {
    if (s[i] == '\0')
    {
        return 0;
    }
    
    if (isVowel(s[i]))
    {
        return 1 + count_vowels(s, i + 1);
    }
    else
    {
        return count_vowels(s, i + 1);
    }
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int len = strlen(s);
    //printf("%d", len);
    printf("%d", count_vowels(s, 0));
    return 0;
}