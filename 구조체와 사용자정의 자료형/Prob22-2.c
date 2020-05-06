#include <stdio.h>

struct employee{
    char name[20];
    char SocialNum[20];
    int Pay;
};

int main(){
    struct employee emp[3];

    int i;
    for(i=0; i<3; i++){
        printf("emp%d: ", i+1);
        scanf("%s %s %d", emp[i].name, emp[i].SocialNum, &emp[i].Pay);
    }
    printf("\n");

    for(i=0; i<3; i++){
        printf("emp%d \n%s %s %d \n", i+1, emp[i].name, emp[i].SocialNum, emp[i].Pay);
    }
    return 0;
}