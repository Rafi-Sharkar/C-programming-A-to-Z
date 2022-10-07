#include<stdio.h>

int main(){
    int a, *temp, diff ;
    int *j;
    j = &a;
    temp = j;
    j++;
    
    printf("The size of the data type is %d \n", (j - temp) );


    return 0;
}