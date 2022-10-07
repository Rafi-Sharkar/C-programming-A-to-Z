#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*ptr;
    float *ptr = (float* ) malloc(n*sizeof(float));    
    //malloc() allocate(point) a memory at *ptr. means --n*sizeof(float)-- size of memory reserved for *ptr(pointer)

    free(ptr); 
    //free() deallocate those memory after using. means memory of ptr is released.

    return 0;
}

/*
There have no way to fucntion automatically allocate and deallocate a menory.

if you once allocate the memory. then if you use or not but the memory was exit there. 
so free those memory we use the free() to use minimam size of memory

*/