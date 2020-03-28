#include <stdio.h>
int GCD(int a, int b);

int main(void)
{
    int num1, num2;
    printf("write down two numbers: ");
    scanf("%d %d", &num1, &num2);

    return 0;
}

int GCD(int a, int b)
{
    int n;
    
    for(int i=1; i<b; i++)
    {
        if(a%i==0 && b%i==0)
        n= i;
    }
    printf("GCD of num1&num2 is %d", n);
    return 0;
}
