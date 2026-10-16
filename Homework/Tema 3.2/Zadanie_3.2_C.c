#include <stdio.h>

int main()
{
    char str[100];
    int loccnt = 0;
    
    while(scanf("%s", str) == 1){

        int len = 0;

        for (int i = 0; i < loccnt; i++){
            printf(".");
        }

        printf("%s\n", str);

        while(str[len] != '\0'){
            len++;
        }

        loccnt += len;

    }
    return 0;

}