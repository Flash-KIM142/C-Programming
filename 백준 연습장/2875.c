#include <stdio.h>

int MaxTeam(int n1, int n2);

int main(){
    int N,M,K;
    scanf("%d %d %d", &N,&M,&K);

    int T=MaxTeam(N,M);
    int S=N+M-3*T;

    if(K<=S)
    printf("%d \n", T);
    else{
        int i=(K-S-1)/3;
        T-=i+1;
    
        printf("%d", T);
    }
    return 0;
}

int MaxTeam(int n1, int n2){
    int NumOfTeam;
    
    if(n1/2>=n2)
    NumOfTeam=n2;
    else
    NumOfTeam=n1/2;

    return NumOfTeam;
}