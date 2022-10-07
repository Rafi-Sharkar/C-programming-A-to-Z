#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    printf("Enter the value of integer::");
    scanf("%d",&n);

    int *ptr = (int* ) calloc(n, sizeof(int));      //// sometime for menory crisis it return NULL

    // for(i=0;i<n;i++){        // initially calloc return 0 if ther have no data
    //     scanf("%d",ptr+i);
    // }    
    printf("Print the output value .\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}