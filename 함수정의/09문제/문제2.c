#include <stdio.h>
double CelToFah(double c)
{
    return c*1.8+32;
}
double FahToCel(double f)
{
    return (f-32)/1.8;
}

int main(void)
{
    int sel;
double num;
printf("1.섭씨를 화씨로 2.화씨를 섭씨로 \n");
printf("선택>>");
scanf("%d", &sel);

if(sel==1)
{
    printf("섭씨 입력: ");
    scanf("%lf", &num);
    printf("화씨로는: %f \n", CelToFah(num));
}
else if(sel==2)
{
    printf("화씨 입력: ");
    scanf("%lf", num);
    printf("섭씨로는: %f \n", FahToCel(num));
}
else
    printf("오류다 븅신아");
return 0;
}
