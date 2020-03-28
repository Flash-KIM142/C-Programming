#include <stdio.h>

int main(void)
{
    int kor, eng, math;
    double avr;
    printf("국어, 영어, 수학 점수 입력: ");
    scanf("%d %d %d", &kor, &eng, &math);
    avr=(kor+eng+math)/3;
    printf("평균 : %f \n", avr);

    if(avr>=90)
    printf("A! \n");
    else if(avr>=80)
    printf("B! \n");
    else if(avr>=70)
    printf("C! \n");
    else if(avr>=60)
    printf("D! \n");
    else
    {
        printf("F! \n");
    }
    return 0;
}