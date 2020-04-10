#include <stdio.h>

int main(){
    int num1=10, num2=20, num3=30;
    int *arr[3]={&num1, &num2, &num3};

    printf("%d %p \n", *arr[0], arr[0]);
    printf("%d %p \n", *arr[1], arr[1]);
    printf("%d %p \n", *arr[2], arr[2]);

    int arr1[3]={num1, num2, num3};
    
    printf("%d %p \n", arr1[0], &arr1[0]);
    printf("%d \n", arr1[1]);
    printf("%d \n", arr1[2]);
    return 0;
}