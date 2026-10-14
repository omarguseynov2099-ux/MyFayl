#include <stdio.h>

int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int zamenaN = n;

    int arr[n];
    
    for (int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    int cnt = 0;
    int i = 0;
    int temp = n;
    while (n != 1){
        if (i == temp){
            i = 0;
        }
        if (arr[i] != 0){
            cnt++;
        }
        
        if (cnt % k == 0 && cnt != 0){
            arr[i] = 0;
            cnt = 0;
            n--;
        }
        i++;
    }

    int res = 0;
    for (int j = 0; j < zamenaN; j++){
        res += arr[j];
    }
    printf("%d\n", res);
    return 0;
}