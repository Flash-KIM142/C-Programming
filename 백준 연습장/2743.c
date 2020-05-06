#include <stdio.h>
#include <string.h>

int main(){
    char Word[100];
    int len=0;
    scanf("%s", Word);

    len=strlen(Word);
    printf("%d", len);
    return 0;
}

