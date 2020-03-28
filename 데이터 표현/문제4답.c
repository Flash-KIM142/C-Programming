#include <stdio.h>

int main(void)
{
    int num;
    printf("하나 써봐 : ");
    scanf("%d" , &num);
    num= ~num;
    num= num + 1;
    printf("부호 바꿔봐써 : %d \n", num);
    return 0;
}