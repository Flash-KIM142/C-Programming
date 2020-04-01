#include <stdio.h>

int main(){
    int num1=10, num2=20, num3=30, i;
    int *arr[3]={&num1, &num2, &num3};

    for(i=0; i<3; i++)
    printf("%d \n", *arr[i]);
    return 0;
}