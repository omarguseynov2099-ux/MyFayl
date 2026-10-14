#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int summ = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            summ += arr[i];
        }
    }
    int min_id = 0;
    int max_id = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > arr[max_id]){
            max_id = i;
        }
        if (arr[i] < arr[min_id]){
            min_id = i;
        }
    }
    int power = 1;
    int minm = (max_id > min_id ? min_id : max_id);
    int maxm = (max_id > min_id ? max_id : min_id);
    for (int i = minm + 1; i < maxm; i++){
        power *= arr[i];
    }
    printf("%d %d", summ, power);
    return 0;
    
}