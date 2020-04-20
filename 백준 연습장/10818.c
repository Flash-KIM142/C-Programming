#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int max=-1000001;
    int min=1000001;

    int num;
    for(int i=0; i<N; i++){
        scanf("%d ", &num);

        if(num<min)
        min=num;
        if(num>max)
        max=num;
    }
    printf("%d %d\n", min, max);
}
