#include<stdio.h>

int main(){
    char ch;

    // 97-122 = a-z
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch<=122 && ch>=97){printf("%c is lower case character !!", ch);}
    else{ printf("%c It is not lowercase !!", ch);}

    return 0;
}