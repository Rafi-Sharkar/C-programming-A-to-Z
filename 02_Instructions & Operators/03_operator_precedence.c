#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;

    printf("The value of 3x - 8y is %d \n", 3*x - 8*y);
    printf("The value of 8y / 3x is %d \n", 8*y / 3*x);     
    // 8*3 / 3*2 = 24/6 = 4, will give wrong answer
    // 8*3 / 3*2 = 24/3 *2 = 8 * 2 = 16        // (*, /) follows left to right associativity





    return 0;
}


// at the Absence of parentheses
// 1st --> *, /, %
// 2nd --> +, -
// 3rd --> =

/* 
### Operator Associativity :
When  operators of equal priority are present in an expression,
the tie is taken care of by associativity.
*/ 