#include<stdio.h>

int main(){
    char *ptr = "Rafi Sharkar";         // a;
    // char ptr[] = "Rafi Sharkar";        // b;     a and b line are same       

    printf("%s",ptr);

    return 0;
}

/*
When we use %s, compilar convert 1st
char *ptr = "Rafi Sharkar";  ===>  char ptr[]={'R','a','f','i',' ','S','h','a','r','k','a','r','\0'}; 
*/