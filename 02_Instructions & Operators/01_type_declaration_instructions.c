#include<stdio.h>

int main(){
    int a= 4;      // type declaration instruction
    int b= 4, c, d;      // type declaration instruction
    c=d=a;

    printf("The value of a is %d\n", d);
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", b);
    printf("The value of a is %d\n", c);

    
    // float b = a + 8.9;
    // float a = 1.1;
    // printf("The value of a is %f\n", b);       // it throw error because in #L14 a is not define

    return 0;
}   