#include <stdio.h>
void RetMax(int a, int b, int c, int *max, int *mid, int *min)
{
    int t;

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    *min = a;
    *mid = b;
    *max = c;
}

int main()
{
    int max, mid, min, maxB, midB, minB;
    int A1, A2, A3;
    int B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    RetMax(A1, A2, A3, &max, &mid, &min);
    RetMax(B1, B2, B3, &maxB, &midB, &minB);

    printf("%d\n", max * maxB + mid * midB + min * minB);
    return 0;
}