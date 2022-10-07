#include<stdio.h>

int main(){
    int a ;
    int *ptr;

    a = 6;
    ptr = &a;
    
    printf("The address of variable a is %u \n", &a);
    printf("The value of address %u is %d \n", ptr, *ptr);
    return 0;
}