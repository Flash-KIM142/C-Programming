#include <stdio.h>

int Calculate(int a, int b);

int main(void)
{
    int a, b, result;

    printf("(a제곱+b제곱)/(2a-b)를 계산합니다. \n");
    printf("a 와 b 입력: ");
    scanf("%d %d", &a, &b);
    result=Calculate(a,b);
    printf("result=%d \n", result);
    return 0;
}

int Calculate(int a, int b)
{
    int result;
    result=(a*a+b*b)/(2*a-b);
    return result;
}