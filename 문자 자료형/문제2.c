#include <stdio.h>

int main(void)
{
    double num1, num2;
    printf("두 개의 실수 입력: ");
    scanf("%lf %lf", &num1, &num2);

    printf("뺀 거: %f \n", num1 - num2);
    printf("곱한 거: %f \n", num1*num2);
    return 0;
}