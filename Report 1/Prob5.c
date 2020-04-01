#include <stdio.h>

int main(void)
{
    int point1=95, point2=84;
    int total=point1+point2;

    printf("point1:%d  point2:%d \ntotal:%d \n", point1, point2, total);
    printf("Average:%d \n", total/2);
    printf("Average:%f \n", total/2.0);
    return 0;
}