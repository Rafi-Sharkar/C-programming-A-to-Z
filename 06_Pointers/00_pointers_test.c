#include<stdio.h>

int main(){
    int  x, i, *pi; 
    char c , *ch;
    float f, *fl;
    i = 34;
    pi = &i;

    c = "r";
    ch = &c;

    f = 3.1416;
    fl = &fl;

    // x = *pi;

    printf("--%u-- point to %d return  the value -%u- \n", pi, i, *pi);
    printf("--%u-- point to %c return  the value -%u- \n", ch, c,*ch);
    printf("--%u-- point to %f return  the value -%u-\n", fl, f, *fl);


    // printf("%d return the value from pointer\n", x);
    
    return 0;
}

/*
i = 34;
j= &i;      // j is a pointer of i

declaration by (* then write the variable)

pi = &i      // assigns a pointer to the integer i to the pointer variable pi

i = *pi     // assigns the value of that integer to the integer variable x.

we can also define
(int *) a,b,d;      // point to an int or (int *)
*/

