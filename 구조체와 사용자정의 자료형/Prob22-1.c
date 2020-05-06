#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    char SocialNum[20];
    int PaymentInfo;
};

int main(){
    struct employee man1;

    fputs("정보들 입력해봐: ", stdout);
    scanf("%s %s %d", man1.name, man1.SocialNum, &man1.PaymentInfo);

    printf("%s %s %d", man1.name, man1.SocialNum, man1.PaymentInfo);
    return 0;
}