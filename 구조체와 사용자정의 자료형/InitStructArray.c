#include <stdio.h>

struct person{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(){
    struct person arr[3]={
        {"Ted", "010-2435-6425", 26},
        {"Marshall", "010-2431-6865", 28},
        {"Lilly", "010-2315-9065", 25}
    };

    int i;
    for(i=0; i<3; i++)
    printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

    return 0;
}