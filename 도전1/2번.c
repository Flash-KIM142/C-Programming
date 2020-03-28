#include <stdio.h>
int Dan(int a, int b);

int main(void)
{
    int num1, num2;
    printf("write down two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1<num2)
    Dan(num1, num2);
    else
    Dan(num2, num1);

    return 0;
}

int Dan(int a, int b)
{
    int i,j;
    for(i=a; i<b+1; i++)
    {
        for(j=1; j<10; j++)
        {
            printf("%d X %d = %d \n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}