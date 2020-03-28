#include <stdio.h>

int MaxNum(int n1, int n2, int n3)
{
    if(n1>n2)
    return (n1>n3) ? n1:n3;
    else
    return (n2>n3) ? n2:n3;
}

int MinNum(int n1, int n2, int n3)
{
    if(n1<n2)
    return (n1<n3) ? n1:n3;
    else
    return (n2<n3) ? n2:n3;
}

int main(void)
{
    int num1, num2, num3;
    printf("Write 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Biggest: %d \n", MaxNum(num1, num2, num3));
    printf("Smallest: %d \n", MinNum(num1, num2, num3));
    return 0;
}