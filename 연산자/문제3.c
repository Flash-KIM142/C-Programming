#include <stdio.h>

int main(void)
{
    int result;
    int num1;

    printf("하나 골라봐: ");
    scanf("%d", &num1);
    
    result = num1*num1;
    printf("%d \n", result);
    return 0;
    }