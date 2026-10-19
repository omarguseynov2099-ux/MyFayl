#include <stdio.h>

void razvorot(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    razvorot(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}