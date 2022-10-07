// write a recursive function to calculate the sum of first n natural numbers
#include<stdio.h>
int sum(int n);

int main(){
    int number, result;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    printf("\n");
    result= sum1(number);
    printf("Sum = %d",result);
    
    return 0;
}


int sum1(int n){
    int result;
    if(n!=0){
    return n + sum1(n-1);
    }else{ return 0;}
}