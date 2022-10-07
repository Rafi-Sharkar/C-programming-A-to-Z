// A function is a block of code which performs a particular task.
#include<stdio.h>

void display();     // function prototype
// 
int main(){
    int a;
    printf("Initializing display function.\n");
    display();      // function call
    printf("Display function finished its work.\n");

    return 0;
}

void display(){     // function defination
    printf("Hi, I am Rafi Sharkar");
}