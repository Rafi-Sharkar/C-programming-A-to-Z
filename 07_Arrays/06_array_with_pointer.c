#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];        // ptr = &marks[0]  and ptr =  marks;   are same
    for(int i=0;i<4;i++){
        printf("Enter the value of %dth student\n", i+1);
        scanf("%d",ptr);
        ptr++;
    }
    
    ptr = &marks[0];     // i can print it with ptr
    for(int i=0; i<4 ;i++){
        printf("The value of marks for student %d is %d\n", i+1,*ptr);
        ptr++;
    }

    // Or

    // for(int i=0; i<4 ;i++){
    //     printf("The value of marks for student %d is %d\n", i+1,marks[i]);
    // }
    // return 0;
}