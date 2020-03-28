#include <stdio.h>
#include <stdlib.h>
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

    if((2*a-b)==0)
    {
        printf("나눗셈의 분모가 0이 되므로 계산을 진행할 수 없습니다.");
        exit(0);
    }
    result=(a*a+b*b)/(2*a-b);
    return result;
}