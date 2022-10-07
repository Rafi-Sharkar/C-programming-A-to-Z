#include<stdio.h>

int main(){
    int i = 34;
    // float i = 3.1416;
    // char i = 'r';
    int *j = &i;        // j will now store the address of i    // pointer to integer
    int **k = &j;       // pointer to pointer
    int ***o = k;       // pointer to pointer to pointer

    printf("The value of i is %c \n ", i);
    printf("The value of i is %c \n ", *j);
    printf("The address of i is %u \n ", &i);
    printf("The address of i is %u \n ", j);
    printf("The address of j is %u \n ", &j);
    printf("The value of j is %u \n ", *(&j));
    printf("The address of *j is %u \n ", k);
    printf("The value  of *j is %u \n ", *k);
    printf("The address of *j is %u \n ", o);
    printf("The value  of *j is %u \n ", *o);

    


    return 0;
}   

/*
&i  means address of i
for storing this address we use a special type of data type 
variable  is x,
int* y;
y = &x  // y is address of variable,
*y      // value of address y

int* x; or float* y; or char* z;        // x, y, z  are the variable which are going to store the address

int i ;         // integer
int *pi ;       // pointer to integer
int **pi ;      // pointer to pointer to integer
int ***pi ;     // pointer to pointer to pointer to integer
--    -- ;      // --           --          --          --
--    -- ;      // --           --          --          --
and so on

*/

