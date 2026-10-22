#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr_prep[15001];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr_prep[i]);
    }
    int M;
    scanf("%d", &M);
    int dataStud;
    int cnt = 0;
    for (int i = 0; i < M; i++){
        scanf("%d", &dataStud);

        int left = 0;
        int right = N - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;

            if (arr_prep[mid] == dataStud){
                cnt++;
                break;
            }
            else if (arr_prep[mid] < dataStud){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
            
        }
    }
    printf("%d\n", cnt);
    return 0;

}