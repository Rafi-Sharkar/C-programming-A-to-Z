#include<stdio.h>

int main(){
    FILE *ptr;

    // ptr = fopen("simple_03.txt","r");   //--> for reading the file   -not return NULL-
    ptr = fopen("simple_03.txt","w");   //--> for writing the file  -ok-
    // ptr = fopen("simple_01.txt","a");   //--> for writing the file


    return 0;
}