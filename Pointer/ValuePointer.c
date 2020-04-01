#include <stdio.h>

int main(void){
    int *pnum;
    int num=15;

    *pnum=&num;
    
    printf("value of Pointer p: %d \n", pnum);
    printf("address of int type variable num: %d \n", &num);

    return 0;
}