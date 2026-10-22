#include <stdio.h>

int main()
{
    char arr[256];
    fgets(arr, sizeof(arr), stdin);
    char new_arr1[256];
    char new_arr2[256];
    int ind = 0;
    for (int i = 0; arr[i] != '\0' && arr[i] != '\n'; i++)
    {
        if (arr[i] == ' ')
        {
            ind = i;
            break;
        }
        new_arr1[i] = arr[i];
    }
    int j = 0;
    for (int i = ind + 1; arr[i] != '\0' && arr[i] != '\n'; i++)
    {
        new_arr2[j] = arr[i];
        j++;
    }
    for (int i = 0; i < j; i++)
    {
        printf("%c", new_arr2[i]);
    }
    printf(" ");
    for (int i = 0; i < ind; i++)
    {
        printf("%c", new_arr1[i]);
    }
    return 0;
}