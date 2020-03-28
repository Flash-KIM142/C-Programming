#include <stdio.h>

int main(void)
{
    int num1, num2;
    int result;

    printf("정수 두 개 입력: ");
    scanf("%d %d", &num1, &num2);

    result = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result);
    return 0;
}