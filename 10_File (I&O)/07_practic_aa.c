#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr = fopen("p1.txt","r");
    fscanf(ptr,"%d %d %d",&a, &b, &c);      // file data will be store in a,b,c variable
    printf("%d \n%d\n%d\n",a,b,c);          // value of file data
    return 0;
}

/*
fscanf(ptr,get data from file)      [read data]     1st argument to 2nd argument
fprintf(ptr, put data on file)      [write data]    2nd argument to 1st argument
*/