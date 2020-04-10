#include <stdio.h>

int main(){
    int hrs, min;
    int t;
    
    scanf("%d %d", &hrs, &min);
    scanf("%d", &t);
    
    if(min+t>=60){
        hrs+=(min+t)/60;
        min=(min+t)%60;
        if(hrs>=24){
            hrs%=24;
            min%=60;
        }
    }
    else{
        min+=t;
    }
    
    printf("%d %d", hrs, min);
    return 0;
}