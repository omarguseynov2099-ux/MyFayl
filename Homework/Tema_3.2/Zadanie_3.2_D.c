#include <stdio.h>

int main()
{
    int bits[705];
    int bitt = 0;
    char ch;
    while(scanf("%c", &ch) == 1 && ch != '\n' && ch != '\0'){
        for (int j = 6; j >= 0; j--)
        {
            bits[bitt] = (ch >> j) & 1;
            bitt++;
        }
    }
    int curent = bits[0];
    int cnt = 1;
    for (int i = 1; i < bitt; i++)
    {
        if (bits[i] == curent)
        {
            cnt++;
        }
        else
        {
            if (curent == 1)
                printf("0 ");
            else
                printf("00 ");
            for (int j = 0; j < cnt; j++)
            {
                printf("0");
            }
            printf(" ");
            curent = bits[i];
            cnt = 1;
        }
    }
    if (curent == 1)
        printf("0 ");
    else
        printf("00 ");
    for (int k = 0; k < cnt; k++)
    {
        printf("0");
    }
    return 0;
}