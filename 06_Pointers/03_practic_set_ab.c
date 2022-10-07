#include<stdio.h>
void printadd(int a ){
    printf("The address( in func ) of variavle a is %u\n",&a);
}

int main(){
    int  i = 4;
    printf("The value of variable i is %d \n",i);
    printf("The address of variable i is %u \n",&i);
    printadd(i);
    return 0;
/*
i and a are store in different location
*/

}


/*
question
void function doesn't return any think
    but in this scenery void function return some think
*/