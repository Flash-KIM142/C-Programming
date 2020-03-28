#include <stdio.h>
int bol(int a,int b);
main()
{
 int inp1,inp2;
 printf("---공약수 구하는 프로그램---\n");
 printf("두개의 정수 입력 : ");
 scanf("%d %d",&inp1,&inp2);
 bol(inp1,inp2);
}//main
int bol(int a,int b)
{
 int i;
 int sum=0;
 for(i=1; i<=b; i++){
  if(a%i==0 && b%i==0)
  sum=i; 
 }
printf("최대 공약수 : %d\n",sum);
}


