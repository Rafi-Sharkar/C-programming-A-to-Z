#include<stdio.h>

int main(){
    int i,factorial = 1, n;
    printf("Enter the number:\n");
    scanf("%d",n);
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The value of factorial %d is %d",n,factorial);
    return 0;
}