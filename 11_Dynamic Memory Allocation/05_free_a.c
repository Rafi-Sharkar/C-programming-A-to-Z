#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    printf("Enter the value of integer::");
    scanf("%d",&n);

    int *ptr = (int* ) malloc(n*sizeof(int));     // create void pointer. and it is your responsibility to set data type which you need  
    // if(ptr == NULL){
    //     exit(1);
    // }
    for(i=0;i<n;i++){
        printf("Enter the value of %d element: \n",i);
        scanf("%d",ptr+i);
        free(ptr);
    }
    for(i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}