#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    int num;

    ptr1 = fopen("p3.txt","r");
    ptr2 = fopen("p4.txt","w");

    char c = fgetc(ptr1);
    while (c!=EOF)
    {
        fputc(c,ptr2);
        c = fgetc(ptr1);    // don't forget to write this. other wise infinity loop will be create
    }
    

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}