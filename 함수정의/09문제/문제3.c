#include <stdio.h>

void ShowFiboSeries(int num)
{
    int f1=0, f2=1, f3, i;
    if(num==1)
    printf("%d ", f1);
    else
    printf("%d %d ", f1, f2);    //  여기까지만 보면 두 번째 피보나치 수까지만 커버되는 건데 밑의 for문이 어떻게 그 이상을 커버하는 구조인지 궁금합니다

    for(i=0; i<num-2; i++)   // num의 역할이 무엇인지, i와 num사이의 관계가 이 상황에서 어떻게 쓰이는지 궁금합니다
    {                        // 아래의 for 문 안의 함수가 어떤 의미를 가지는지 잘 모르겠습니다 
        f3=f1+f2;
        printf("%d ", f3);
        f1=f2;               // 특히 이 줄과 밑 줄이 의미하는 바가 뭔지 감이 전혀 안 옵니다
        f2=f3;
    }
}

int main(void)
{
    int n;
    printf("How many Fibo series do you wanna show: ");
    scanf("%d", &n);
    if(n<1)
    {
        printf("Write down a number above 1 \n");
        return -1;   // 반환값을 0으로 바꿔도 전혀 달라지는 바가 없는데 왜 -1이란 값을 사용한 건지 모르겠습니다
    }
    ShowFiboSeries(n);
    return 0;
}