#include <stdio.h>

int main(void)
{
    int x1, y1;
    int x2, y2;
    int S;

    printf("x1,  y1 : ");
    scanf("%d %d", &x1, &y1);
    printf("x2,  y2 : ");
    scanf("%d %d", &x2, &y2);
    S = (x2-x1)*(y2-y1);
    printf("직사각형의 넓이는 %d입니다. \n", S);
    return 0;
}