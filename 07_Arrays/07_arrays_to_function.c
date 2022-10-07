#include<stdio.h>

// void printarray(int *ptr, int n){
//     for (int i=0 ;i<n; i++){
//         printf("The value of element %d is %d \n",i+1, *(ptr+i));
//     }
// }

void printarray(int ptr[], int n){      //??? there ptr is not address recever  ???
    // ptr[3] = 7777;    //this value will be change in arr array of main as well
    for (int i=0 ;i<n; i++){
        printf("The value of element %d is %d \n",i+1, ptr[i]);
    }
    ptr[3] = 7777;
}

int main(){

    int arr[]={1,4,2,67,3,2,42,55};
    printarray(arr, 8);
    printf("%d\n",arr[3]);
    
    return 0;
}
// int marks[5];
// int *ptr ;
// ptr = &marks[0]  and ptr =  marks;   are same