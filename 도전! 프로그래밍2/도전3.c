#include <stdio.h>

int main(){
    int arr[10];
    int brr[10];
    int i,j=0, k=9;

    for(i=0; i<10; i++){
        printf("%d: ", i+1);
        scanf("%d", &arr[i]);

        if(arr[i]%2!=0)
        brr[j++]=arr[i];
        else
        brr[k--]=arr[i];
    }

    for(i=0; i<10; i++){
        printf("%d ", brr[i]);
    }
    return 0;
}