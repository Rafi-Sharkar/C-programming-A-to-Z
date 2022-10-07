#include <stdio.h>

int main() // int main() is the function where from the execution start and at return 0; execution will terminate

{
    // int a = 3;      // a assign as 3
    int a = 4; // integer constant
    // int b = 8.5;   // Not recommended because 8.5 is not an integer constant
    float b = 8.5; // real constant
    char c = 'u';  // character constant
    int d = 45;
    int e = 45 + 9;
    printf("The value of a is %d \n", a);
    printf("The value of a is %f \n", b);
    printf("The value of a is %c \n", c);

    printf("The value of a is %d \n", a * d);
    printf("The value of a is %d \n", e);

    return 0;
}

// for,
//    integer constant --> %d
//    real constant --> %f
//    character constant --> %c