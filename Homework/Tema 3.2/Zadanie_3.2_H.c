#include <stdio.h>

int main()
{
    char s[251];
    scanf("%s", s);
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n')
    {
        len++;
    }
    int cnt = 0;
    for (int i = 0; i < len - 4; i++)
    {
        if (s[i] == '>' && s[i + 1] == '>' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '>')
        {
            cnt++;
        }
    }
    for (int i = 0; i < len - 4; i++)
    {
        if (s[i] == '<' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '<' && s[i + 4] == '<')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
} 