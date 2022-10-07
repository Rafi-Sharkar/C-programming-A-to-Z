#include<stdio.h>
//sum is a function whice takes a and b as input and returns a inteder as an output
int sum(int a , int b);     // function prototype

int main(){
    int c;
    c= sum(2,5);       // function call
    printf("The sum is %d",c);
    return 0;
}

int sum (int a, int b){
    int result;
    result = a+b;
    return result;
}