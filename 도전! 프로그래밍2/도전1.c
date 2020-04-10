#include <stdio.h>
void ShowOdd(int *arr, int len); //홀수출력 함수
void ShowEven(int *arr, int len); //짝수출력 함수

int main(void) {
int arr[10]; 
int i, len; // 반복문에 쓰일 변수, 배열의 길이
printf("10개의 숫자를 입력받아 홀수와 짝수끼리 출력하는 프로그램\n");
printf("총 10개의 숫자 입력\n");

for(i=0; i<10; i++){
scanf("%d", &arr[i]);
}
len = sizeof(arr)/sizeof(int);
ShowOdd(arr, len);
ShowEven(arr, len);
return 0;
}

void ShowOdd(int *arr, int len){
int i;
printf("홀수 출력: ");
for(i=0; i<len; i++){
if(arr[i]%2 == 0)
continue;
printf("%d ", arr[i]);
}
printf("\n");
}

void ShowEven(int *arr, int len){
int i;
printf("짝수 출력: ");
for(i=0; i<len; i++){
if(arr[i]%2 != 0)
continue;
printf("%d ", arr[i]);
}
printf("\n");
}