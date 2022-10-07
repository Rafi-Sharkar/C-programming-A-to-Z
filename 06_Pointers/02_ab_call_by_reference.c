#include<stdio.h>

void right_swap(int * a, int* b);
void wrong_swap(int a, int b);

int main(){
    int x=4, y=7;
    printf("The value of 4 and 7 before function call is %d, %d\n", x, y);
    // wrong_swap(x,y);    // will not work due to call by value
    right_swap(&x, &y);    // will work due to call by reference
    printf("The value of 4 and 7 before function call is %d, %d\n", x, y);

    return 0;
}

void right_swap(int *a, int* b){    // a,b are now storing the address
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void wrong_swap(int a, int b){      // call by value
    int temp;
    temp = a;
    a = b;
    b = temp;

    // printf();
}
