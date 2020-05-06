#include <stdio.h>

int main(){
    int N, i;
    double score[1000];
    double sum=0; 
    double max=0;

    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%lf", &score[i]);

        if(max<score[i])
            max=score[i];
    }
    
    for(i=0; i<N; i++){
        score[i]=score[i]/max*100.0;
        sum+=score[i];
    }
    printf("%.2f", sum/(double)N);
return 0;
}