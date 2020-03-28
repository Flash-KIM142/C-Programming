#include <stdio.h>

int main(void)
{
    double rad;
    double area;
    printf("원의 반지름 골라: ");
    scanf("%1f", &rad);

    area = rad*rad*3.1415;
    printf("원의 넓이 = %2f \n", area);
    return 0;
}