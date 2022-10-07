// write a program using recursion to calculate the n'th element of the fibonacci series.
#include<stdio.h>
int fib(int a);

int main(){
    int n,result;
    printf("Enter the N'th Number(position start from 0): ");
    scanf("%d",&n);
    result = fib(n);
    printf("The %d'th number in Fibonacci series is %d \n", n, result);
    return 0;
}

int fib(int n){
    if(n==0){return 0;}
    else if (n==1){return 1;}
    else{return (fib(n-2)+fib(n-1));}
}


/*
hint:
fib(n) = fib(n-1) + fib(n-2)
base condition:
fib(1) = 0
fib(2) = 1
*/