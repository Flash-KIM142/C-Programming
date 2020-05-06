#include <stdio.h>

int main(){
    int i,j,k;
    int n;
    scanf("%d", &n);

    for(i=1; i<n+1; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        printf("*");
        
        if(i>1){
            for(k=1; k<=2*i-3; k++){
                printf(" ");
            }
        printf("*");
        }
    printf("\n");
    }
return 0;
}