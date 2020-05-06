#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int R;
        char arr[20];
        scanf("%d %s", &R, arr);

        int len=strlen(arr);
        for(int i=0; i<len; i++){
            for(int k=0; k<R; k++)
                printf("%c", arr[i]);
        }
        printf("\n");
    }
    return 0;
}