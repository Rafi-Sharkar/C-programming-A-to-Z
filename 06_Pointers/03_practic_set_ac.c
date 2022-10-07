#include<stdio.h>
void printadd(int *a ){
    int c;
    c = *a + 4;
    printf("Befor adding: %d, after adding : %d\n ",*a,c);
}

int main(){
    int  i = 7;
    printadd(&i);
    return 0;
}