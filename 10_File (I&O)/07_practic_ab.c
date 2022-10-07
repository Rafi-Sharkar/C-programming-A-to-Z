#include<stdio.h>

int main(){
    FILE *ptr;
    int num;

    ptr = fopen("p2.txt","w");
    printf("Enter the integer you need the table of ::\n");
    scanf("%d",&num);
    for (int i = 1;i<=10;i++){
        fprintf(ptr,"%dX%d=%d\n",num,i,i*num);      // enter the data in to file
    }
    fclose(ptr);
    
    return 0;
}
/*
fprintf(ptr, put data on file)      [write data]    2nd argument to 1st argument 

*/