/*
Q_1. Which of the following is used to appropriately read a multi-word string
answer: gets()

*/

#include<stdio.h>
#include<string.h>

int main(){
    // char str[8];        // i take an array string  of 8 length  , but it take more and print that
    char *str;
    printf("Enter the name: ");
    gets(str);     // gets take input from variable str which an array.
    puts(str);

    return 0;
}