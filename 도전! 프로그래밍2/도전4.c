#include <stdio.h>

int main(void) {
char str[20]; // 입력받을 문자열
int len=0; // 문자열의 길이
int i;
int pail=1; // 회문 판단 변수
printf("입력받은 문자열이 회문인지 판단하는 프로그램(단, 대소문자 구분)\n");
printf("문자열 입력: ");
scanf("%s", str);

while(str[len] != 0) // 문자열의 길이 구하기
len++;

for(i=0; i<len/2; i++){
if(str[i] != str[(len-i)-1]){ // 회문이 아닌경우=
pail = 0; 
printf("회문이 아닙니다.\n");
break;
}
}
if(pail == 1) // 회문인 경우
printf("회문입니다.\n");
return 0;
}