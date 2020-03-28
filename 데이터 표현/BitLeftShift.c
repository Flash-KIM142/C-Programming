#include <stdio.h>

int main(void)
{
    int num=15;
    
    int result1 = num<<1;
    int result2 = num<<2;
    int result3 = num<<3;

    printf("1칸 이동 : %d \n", result1);
    printf("2칸 아동 : %d \n", result2);
    printf("3칸 이동 : %d \n", result3);
    return 0;
}