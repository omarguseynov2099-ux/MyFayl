#include <stdio.h>

int main(){
    int h, w;
    scanf("%d %d", &w, &h);
    char arr_first[105][105];
    char arr_second[105][105];

    for(int i = 0; i < h; i++){
        scanf("%s", &arr_first[i]);
    }
    for(int i = 0; i < h; i++){
        scanf("%s", &arr_second[i]);
    }
    int a00, a01, a10, a11;
    scanf("%d %d %d %d", &a00, &a01, &a10, &a11);

    for (int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++){
            if (arr_first[i][j] == '0' && arr_second[i][j] == '0'){
                printf("%d", a00);
            }
            if (arr_first[i][j] == '0' && arr_second[i][j] == '1'){
                printf("%d", a01);
            }
            if (arr_first[i][j] == '1' && arr_second[i][j] == '0'){
                printf("%d", a10);
            }
            if (arr_first[i][j] == '1' && arr_second[i][j] == '1'){
                printf("%d", a11);
            }

        }
        printf("\n");
    }
    return 0;
}