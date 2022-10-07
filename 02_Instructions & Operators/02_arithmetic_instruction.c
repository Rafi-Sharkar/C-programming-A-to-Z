#include <stdio.h>
#include<math.h>
int main()
{
    int a = 4, b = 8;
    printf("The value of a + b is : %d\n", a + b); // a and b are operands and (+) is operators
    printf("The value of a - b is : %d\n", a - b); // operands can be int or float etc
    printf("The value of a * b is : %d\n", a * b); // arithmetic operators  are ( +, -, *, / )
    printf("The value of a / b is : %d\n", a / b);

    int c, d, z;
    z = c * d; // legal
    // c * d = z;      // illegal (=) ==> Assign to. it means "make (b*a)'s value is z" there (b*a) doesn't means anything
    printf("The value of z is : %d", z);

    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2);
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

    // No operator is assumed to be present
    // printf(" The value of 4*5 %d\n", (4)(5));        // will not return 20 !!

    // There is no operator to perform exponentiation in C
    // printf(" The value of 4^5 is %d\n", 4^5);   // will not product 4 to the power 5. for known (^) is  Bitwise XOR operator
    printf(" The value of 4^5 is %f\n", pow(4,5));      // pow function return the real number. so we use (%f)

    printf("The value of 6 + 5 is %d\n", 6+5);
    printf("The value of 6 + 5.6 is %f\n", 6+5.6);
    printf("The value of 6.1 + 5.6 is %f\n", 6.1+5.6);
    printf("The value of 5/2 is %f\n", 5.0/2);            //numenator should be float. denominetor can  integer
    printf("The value of 5/2 is %d\n", 5.0/2);
    printf("The value of 2/5 is %f\n", 2.0/5);           //  2/5 will be 11.699997


    return 0;
}

// % -->    Modular division operator
// % -->    Returns the remainder
// % -->    Cannot be applied on float
// % -->    Sign is same as of numerator