/*
C provides a set of standard library functions for string manupulation.
Some of the most commonly used string function are:
strlen()
*/

#include<stdio.h>
#include<string.h>

int lenstr(char *arr){
    int i = 0, count = 0;
    
    while (arr[i]!='\0')
    {
        if(arr[i]){
            count++;
            i++;
        }
    }
    return count;
    
}

int main(){
    char *st = "Rafi Sharkar";      // excluding the null character and including the space
    // int a = strlen(st);             // length of the string
    int a = lenstr(st);            // manually create function
    printf("The length of string st is %d",a);
    return 0;
}