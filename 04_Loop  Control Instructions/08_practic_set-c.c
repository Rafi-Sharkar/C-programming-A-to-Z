#include<stdio.h>

int main(){
    int i, n, sum=0;
    printf("Sum of first:");
    scanf("%d\n",&n);

    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("The value of sum(1-10) is %d",sum);
    return 0;
}