#include <stdio.h>

int Fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*Fact(n-1);
}

int main(void)
{
    printf("0!=%d \n", Fact(0));
    printf("1!=%d \n", Fact(1));
    printf("2!=%d \n", Fact(2));
    printf("3!=%d \n", Fact(3));
    printf("5!=%d \n", Fact(5));
    printf("8!=%d \n", Fact(8));
    return 0;
}