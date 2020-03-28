#include <stdio.h>

int main(void)
{
    int num;
    printf("1이상 5이하의 정수 입력: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1: 
        printf("1은 ONE \n");
        
        case 2:
        printf("2는 TWO \n");
        
        case 3:
        printf("3은 THREE \n");
        
        case 4:
        printf("4는 FOUR \n");
        
        case 5:
        printf("5는 FIVE \n");
        
        default:
        printf("I don't fuckin' know! \n");
    }
    return 0;
}