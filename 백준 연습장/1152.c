#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    fgets(str, 1000001, stdin);
    int i;
    int cnt=0;
    for(i=0; str[i]; i++){
        if(str[i] == ' ' && str[i+1]!='\n')
        cnt++;
    }
    if(str[0]== '\n' || str[0]== ' ')
    cnt--;
    if(str[strlen(str)-1]==' ')
    cnt--;

    printf("%d", cnt+1);
}
