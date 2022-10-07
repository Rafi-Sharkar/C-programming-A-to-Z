#include<stdio.h>

int main(){
    char str[]="Rafi Sharkar";
    char str_1[]={'R','a','f','i',' ','S','h','a','r','k','a','r','\0'};
    char *ptr = str_1;
    // printf("%c",str[12]);
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}