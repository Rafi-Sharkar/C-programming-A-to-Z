#include<stdio.h>

int main(){
    // char str[]="Rafi Sharkar";
    char str_1[]={'R','a','f','i',' ','S','h','a','r','k','a','r','\0'};
    // char *str = {'R','a','f','i',' ','S','h','a','r','k','a','r','\0'}; // you can't assign pointer like this
    char *str = str_1;
    // printf("%c",str[12]);
    while(*str!='\0'){
        printf("%c",*str);
        str++;
    }
    return 0;
}