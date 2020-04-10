#include <stdio.h>

int main(){
    int a;
    int i,j;
    int arr[20];
    printf("write down a number: ");
    scanf("%d", &a);

    for(i=0; a>0; i++){
        arr[i]=a%2;
        a=a/2;
    }

    for(j=i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
    return 0;
}