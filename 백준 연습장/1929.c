#include <stdio.h>

int main(void)
{
    int M, N;
    printf("Write down two numbers: ");
    scanf("%d %d", &M, &N);

    int i, j, count;
    for(i=M; i<=N; i++)
    {
        count=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d ", i);
        }
    }
    return 0;
}