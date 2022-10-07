// fgetc and fputc is only for char or string. it work like --fscanf() and fprintf()--
#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("getc.txt","r");
    // // char c = fgetc(ptr);

    // printf("The value of my character is :: %c\n",fgetc(ptr));
    // printf("The value of my character is :: %c\n",fgetc(ptr));
    // printf("The value of my character is :: %c\n",fgetc(ptr));
    // printf("The value of my character is :: %c\n",fgetc(ptr));
    // printf("The value of my character is :: %c\n",fgetc(ptr));
    // printf("The value of my character is :: %c\n",fgetc(ptr));

    ptr = fopen("fput.txt","w");
    fputc('C', ptr);
    fputc('C', ptr);
    fputc('C', ptr);
    fclose(ptr);

    return 0;
}