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
    int cnt = 0;

    int mas_buk[26] = {0};
    for (int i = 0; Buk[i] != '\0'; i++)
    {
        mas_buk[Buk[i] - 'a']++;
    }

    for (int i = 0; i < N; i++)
    {
        int word_count[26] = {0};
        int can_form = 1;

        for (int j = 0; arr[i][j] != '\0'; j++)
        {
            int idx = arr[i][j] - 'a';
            word_count[idx]++;

            if (word_count[idx] > mas_buk[idx])
            {
                can_form = 0;
                break;
            }
        }

        if (can_form)
        {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}
