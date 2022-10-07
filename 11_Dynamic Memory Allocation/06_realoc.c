#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
// 01
    ptr = (int*) malloc(6*sizeof(int));     // create void pointer. and it is your responsibility to set data type which you need  

    for(int i=0;i<6;i++){
        printf("The value of %d element is: \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is: %d\n",i,ptr[i]);
    }
// 02
    // Reallocate ptr using realloc()   // reuse same location in 2nd time
    ptr = realloc(ptr, 10*sizeof(int));

    for(int i=0;i<10;i++){
        printf("The value of %d element is: \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of %d element is: %d\n",i,ptr[i]);
    }


    return 0;
}
/*
Realloc() function:
Sometimes the dynamically allocated memory is insufficient or more than required.

realloc is used to allocate memory of new size using the previous pointer and size.

*/
