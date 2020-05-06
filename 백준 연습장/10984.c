#include <stdio.h>
#include <math.h>

int main(){
    int T,N,C;
    double G;

    scanf("%d", &T); 
    double ans1, ans2;
    for(int i=0; i<T; i++){
        ans1=0; ans2=0;
        scanf("%d", &N);
        for(int i=0; i<N; i++){
            scanf("%d %lf", &C, &G);
            ans1+=C;
            ans2+=C*G;
        }
        printf("%d %.1f \n", (int)ans1, ans2/ans1);
    }
    return 0;
    
}