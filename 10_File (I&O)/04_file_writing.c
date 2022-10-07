#include<stdio.h>

int main(){
    FILE *ptr;
    int num = 211;
    ptr = fopen("w3.txt","w");

    fprintf(ptr,"The number is %d\n",num);
    fprintf(ptr,"Hello world, C programming with code with harry");
    fclose(ptr);


    return 0;
}