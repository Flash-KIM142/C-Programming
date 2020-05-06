#include <stdio.h>

int main(){
    FILE * fp=fopen("simple.txt", "wt");
    if(fp==NULL){
        puts("파일오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Flash \n", fp);
    fputs("Your name is punk \n", fp);
    fclose(fp);
    return 0;
}