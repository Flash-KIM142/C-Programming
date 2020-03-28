#include <stdio.h>

int main(void)
{
    int 몫;
    int 나머지;
    int num1, num2;

    printf("두 개 골라봐: ");
    scanf("%d %d", &num1, &num2);

    몫 = num1 / num2;
    printf("몫 : %d \n", 몫);
    나머지 = num1 % num2;
    printf("나머지 : %d \n", 나머지);
    return 0;
}    