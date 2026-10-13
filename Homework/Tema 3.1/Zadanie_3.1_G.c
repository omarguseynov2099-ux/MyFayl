#include <stdio.h>

int main(){
    int R;
    int V, C, N;
    scanf("%d", &R);
    scanf("%d", &V);
    int arr[V];
    for (int i = 0; i < V; i++){
        arr[i] = 1;
    }
    for (int j = 0; j < V; j++){
        scanf("%d %d", &C, &N);
        for (int i = 0; i < N; i++){
            arr[j] *= 10;
        }
        for (int i = 0; i < (C - N); i++){
            arr[j] *= 5;
        }
    }
    long long massivGr[R];
    for (int i = 0; i < R; i++){
        massivGr[i] = 0;
    }
    for (int i = 0; i < V; i++){
        int minid = 0;
        for (int j = 0; j < R; j++){
            
            if (massivGr[j] < massivGr[minid]){
                minid = j;
            }
        }
        massivGr[minid] += arr[i];
    }
    long long max = massivGr[0];
    for (int i = 0; i < R; i++){
        if (massivGr[i] > max){
            max = massivGr[i];
        }
    }
    printf("%lld\n", max);
    return 0;
}