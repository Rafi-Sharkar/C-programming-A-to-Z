#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n", ++i);         // ++i means first increment then print
    print("The value after i++ is %d\n", i);
    printf("The value after i++ is %d\n", i++);         // i++ means first print then increment
    print("The value after i++ is %d\n", i);

    i+=10;  //increments i by 10
    printf("The value of i is %d\n", i);


    return 0;
}


/*
 There haven't any (+++) operator.
--i  means first decrement then print
i--  means first print then decrement
*/