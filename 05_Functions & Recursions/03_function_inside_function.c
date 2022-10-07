#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    
goodmorning();
   
    return 0;
}


void goodmorning(){
    printf("Good morning\n");
    goodafternoon();        // nested function
}
void goodafternoon(){
    printf("Good afternoon\n");
    goodnight();            // nested function
}
void goodnight(){
    printf("Good night\n");
}


/*
there have two type of function
1.Library function
2.user defined function
*/



