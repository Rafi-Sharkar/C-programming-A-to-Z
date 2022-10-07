#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("p5.txt","r");
    ptr2 = fopen("p6.txt","w");


    int i;

    // while (i!=EOF)
    // {
    //     fscanf(ptr1,"%d",&i);
    //     fprintf(ptr2,"%d",(i*2));    // don't forget to write this. other wise infinity loop will be create
    //     fscanf(ptr1,"%d",&i);
    //     printf(" the value of p5 is :: %d",i);  
    // }
    

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}