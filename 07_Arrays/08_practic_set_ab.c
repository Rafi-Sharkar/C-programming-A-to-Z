#include<stdio.h>

int main(){

// Method_1 
    // int arr1[]={1,2,3,4,5,6,7,8,9,10};
    // int *ptr=arr1 ;     // *ptr = &arr1[0]

    // for(int i = 1 ; i<6 ;i++){
    //     for (int j=0;j< 10;j++){
    //     printf(" %dX%d=%d \n", i, *(ptr+j),i* (*ptr+j));
    //     }        
    // }  

// Method_2

    int mult[10];
    for(int i=1;i<11;i++){
        mult[i-1]=5*i;
    }

    for(int i=0;i<10;i++){
        printf("5X%d=%d\n",i+1,mult[i]);
    }
    
      return 0;
}