#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);

    int len, i;
    int sum=0;
    len=strlen(str)-1;

    for(i=0; i<len; i++){
        if(48<=str[i] && str[i]<=57)
        sum+=(str[i]-48);
    }
    printf("숫자의 총합: %d \n", sum);
    return 0;
}