#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char arr[1001][11];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", arr[i]);
    }
    char Buk[101];
    scanf("%s", Buk);

    int i = 0;
    int j = 0;
    int cnt = 0;

    while (j < N)
    {
        int flag = 1;
        while (Buk[i] != '\0' && Buk[i] != '\n')
        {
            for (int c = 0; arr[j][c] != '\n' && arr[j][c] != '\0'; c++)
            {
                if (Buk[i] != arr[j][c])
                {
                    flag = 0;
                }
            }
            i++;
            if (flag == 1)
            {
                cnt++;
            }
            flag = 1;
            i = 0;
        }
        j++;
    }
    printf("%d", cnt);
    return 0;
}