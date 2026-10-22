#include <stdio.h>

int sloj(int a, int b) { return a + b; }
int vich(int a, int b) { return a - b; }
int umn(int a, int b) { return a * b; }
int del(int a, int b) { return a / b; }

int main()
{
    int x;
    scanf("%d", &x);
    int n;
    scanf("%d", &n);
    int A, op;
    int (*arr[])(int, int) = {0, sloj, vich, umn, del};
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &A, &op);
        x = arr[op](x, A);
    }
    printf("%d", x);
    return 0;
}