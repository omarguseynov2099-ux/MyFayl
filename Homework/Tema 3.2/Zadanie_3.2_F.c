#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arra[4], arrb[4];
    for (int i = 0; i < 4; i++)
    {
        arra[i] = a % 10;
        a /= 10;
    }
    for (int i = 0; i < 4; i++)
    {
        arrb[i] = b % 10;
        b /= 10;
    }
    int cntBIKI = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arra[i] == arrb[i])
        {
            cntBIKI++;
        }
    }

    int cntKOROVI = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arra[i] == arrb[j] && i != j)
            {
                cntKOROVI++;
            }
        }
    }
    printf("%d %d", cntBIKI, cntKOROVI);
    return 0;
}