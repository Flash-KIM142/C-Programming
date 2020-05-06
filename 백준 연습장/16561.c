#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ans=0;
    for(int i=1; i<=n/3; i++){
        for(int j=1; j<=n/3; j++){
            int sum=0;
            sum=3*i+3*j;
            if((n-sum)%3==0 && sum<n)
                ans++;
        }
    }
    printf("%d", ans);
    return 0;
}