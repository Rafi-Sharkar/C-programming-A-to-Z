#include<stdio.h>

int main(){
    int arr[10];
    // int *ptr = &arr[0];  // a 
    int *ptr = arr;     // b        // and b lines are same
    ptr = ptr + 2;  // ptr is 1st position, ptr+1 is 2nd positionm ptr+2 is 3rd position

    if (ptr == &arr[2])
    {
        printf("These point to the same location in memory \n");
    }
    else{
        printf("These does not point to the same location in memory \n");
    }
    
    return 0;
}