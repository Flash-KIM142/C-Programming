#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20];
    printf("정수입력: ");
    scanf("%s", str);
    printf("%d \n", atoi(str));

    printf("실수입력: ");
    scanf("%s", str);
    printf("%g \n", atof(str));
    return 0;
}