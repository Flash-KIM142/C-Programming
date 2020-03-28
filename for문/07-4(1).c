#include <stdio.h>

int main(void)
{
    int total, num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    for(total=0; num1<=num2; num1++)
    total+=num1;

    printf("합계: %d \n", total);
    return 0;
}