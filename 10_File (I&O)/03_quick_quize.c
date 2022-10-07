#include<stdio.h>

int main(){
    FILE *ptr;
    int num, num1;
    ptr = fopen("rafi1.txt","r");
    if (ptr == NULL){
        printf("The file does not exist \n");
    }else{
    fscanf(ptr,"%d",&num);      // by fscanf() we can read the value of file.txt
    fscanf(ptr,"%d",&num1);      // by fscanf() we can read the value of file.txt
    fclose(ptr);
    
    printf("The value of num is %d\n",num);
    printf("The value of num is %d\n",num1);
    }
    return 0;
}