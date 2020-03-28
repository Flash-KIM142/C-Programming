#include <stdio.h>
int BiggestOne(int num1, int num2, int num3)
int SmallestOne(int num1, int num2, int num3)

int main(void)
{
    printf("Write 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Big one: %d, Small One: %d \n", BiggestOne(num1, num2, num3), SmallestOne(num1, num2, num3));
    return 0;
}

int BiggestOne(int num1, int num2, int num3)
{
    if(num1>num2)
    return (num1>num3) ? num1:num3;
    else
    return (num2>num3) ? num2:num3;
}

int SmallestOne(int num1, int num2, int num3)
{
    if(num1<num2)
    return (num1<num3) ? num1:num3;
    else 
    return (num2<num3) ? num2:num3;
}