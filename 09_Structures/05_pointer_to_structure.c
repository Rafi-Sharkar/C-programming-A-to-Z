#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};


int main(){

    struct employee e1, *ptr;
    // struct employee *ptr;      // point the struct employee type valriable

    ptr = &e1;
    // (*ptr).code = 101;      // we can write also as : ptr -> code = 101;
    ptr -> code = 101;
    // printf("%d\n", e1.code);         // you can also write ase    --(*ptr).code--
    printf("%d\n", (*ptr).code);
    strcpy(((*ptr).name),"Rafi Sharkar");
    printf("%s", (*ptr).name);

    
    

    return 0;
}