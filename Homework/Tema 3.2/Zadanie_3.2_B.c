#include <stdio.h>

int main()
{
    char arr[81];
    
    scanf("%s", &arr);
    int i = 0;
    int num = 0;
    int cntlen = 0;
    while (arr[i] != '\0'){
        if (arr[i] >= '0' && arr[i] <= '9'){
            num = num * 10 + (arr[i] - '0');
        }
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            if (num != 0){
                while (num--){
                    printf("%c", arr[i]);
                    cntlen++;
                    if (cntlen % 40 == 0)
                        printf("\n");
                }
                num = 0;
            }
            else{
                printf("%c", arr[i]);
                cntlen++;
                if (cntlen % 40 == 0)
                    printf("\n");
            }
           
        }
        
        i++;
        
    }

    return 0;
}