#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    printf("Enter the value of integer::");
    scanf("%d",&n);

    float *ptr = (float* ) malloc(n*sizeof(float));     // create void pointer. and it is your responsibility to set data type which you need  
    if(ptr == NULL){
        exit(1);
    }
    for(i=0;i<n;i++){
        scanf("%f",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%.2f\n",*(ptr+i));
    }
    return 0;
}