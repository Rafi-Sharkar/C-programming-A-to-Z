#include<stdio.h>

int main(){
    // Prime number
    int i,n=1,prime=0;
    for (i=2;i<n;i++){
        if (n%i==0){
            prime = 1;
            break;
        }
    }
    if(prime==1){
    printf("This is not a prime number.");
    }
    else{printf("This is a prime number");}
    return 0;
}