#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char arr[201][201];
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (1)
        {
            char ch;
            scanf("%c", &ch);
            if (ch == '\n')
            {
                break;
            }
            else
            {
                arr[i][j] = ch;
                j++;
            }
        }
        arr[i][j] = '\0';
    }

    int j = 0;
    while (1)
    {
        int curent = arr[0][j];

        if (curent == '\0')
            break;

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == '\0' || arr[i][j] != curent)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%c", curent);
            j++;
        }
        else
            break;
    }
    printf("\n");
    return 0;
}