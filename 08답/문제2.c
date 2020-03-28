#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력:   ");
    scanf("%d %d", &num1, &num2);
    
    int abs;
    abs = num1>num2 ? num1-num2 : num2-num1;
    printf("두 정수의 차: %d \n", abs);
    return 0;
}