#include<stdio.h>

int main(){
    printf("Hello");
    printf("Guys");
    int a=11;
    // Loops are used to repeat similar part of a code snippet efficiently
    // while ( a<10)        // finite
    while ( a>10){          //this will lead to an infinite loop
        printf("%d\n", a);
        a++;
    }

    
    return 0;
}